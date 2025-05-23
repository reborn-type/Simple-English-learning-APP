#include "addwordswindow.h"
#include "ui_addwordswindow.h"
#include "mainwindow.h"
#include "QSqlDatabase"
#include "QString"
#include "training.h"

addWordsWindow::addWordsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addWordsWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE", "words_connection");
    db.setDatabaseName("./WordsDB");

    //работа с дб
    if (db.open()){
        qDebug("DataBase has opened");
    }
    else {
        qDebug("Database hasn't opened.");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE IF NOT EXISTS words(word_id INT PRIMARY KEY, russian TEXT NO NULL, english TEXT NO NULL)");

    model = new QSqlTableModel(this, db);
    model->setTable("words");
    model->select();
    ui->tableView->setModel(model);
    //Настройка таблицы
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->setColumnWidth(0, 50);     // Первый столбец фиксированный
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch); // Второй растягивается
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableView->hideColumn(0);
}

addWordsWindow::~addWordsWindow()
{
    delete model;
    delete query;
    db.close();
    delete ui;
}


void addWordsWindow::closeDatabase() {
    // Сохраняем изменения перед закрытием
    if (model) {
        model->submitAll();
        ui->tableView->setModel(nullptr);  // Отвязываем модель от view
    }

    // Удаляем модель
    delete model;
    model = nullptr;

    // Удаляем запрос
    delete query;
    query = nullptr;

    // Закрываем БД
    if (db.isOpen()) {
        db.close();
    }

    // Удаляем соединение
    QSqlDatabase::removeDatabase("words_connection");
}


void addWordsWindow::on_pushButton_clicked() //кнопка добавить
{
    //Получаем макимальный word_id
    query->exec("SELECT MAX(word_id) FROM words");
    int maxId = 0;
    if (query->next()){
        maxId = query->value(0).toInt();
    }

    //Добавляем строку
    int newRow = model->rowCount();
    model->insertRow(newRow);

    model->setData(model->index(newRow, 0), maxId + 1);

    model->submitAll();
    model->select();
}


void addWordsWindow::on_pushButton_2_clicked() //кнопка удалить
{
    if(row < 0 || row >= model->rowCount()) {
        QMessageBox::warning(this, "Ошибка!", "Не выбрана строка для удаления!");
        return;
    }

    // Запоминаем ID удаляемой строки
    int deletedId = model->data(model->index(row, 0)).toInt();

    model->removeRow(row);

    db.transaction();
    //работа с дб
    QSqlQuery updateQuery(db);
    updateQuery.prepare("UPDATE words SET word_id = word_id - 1 WHERE word_id > ?");
    updateQuery.addBindValue(deletedId);
    model->select();
    updateQuery.exec();
    db.commit();
    model->setFilter(model->filter());
}


void addWordsWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void addWordsWindow::on_pushButton_3_clicked() //кнопка вернуться
{
    model->submitAll();
    model->select();
    closeDatabase();
    this->hide();
    MainWindow *mWindow = new MainWindow(this);
    mWindow->show();
}

//кнопка тренировки
void addWordsWindow::on_pushButton_4_clicked()
{
    model->submitAll();
    model->select();
    closeDatabase();
    this->hide();
    training *TrainingOfWords = new training(this);
    TrainingOfWords->show();
}

