#include "addwordswindow.h"
#include "ui_addwordswindow.h"
#include "mainwindow.h"
#include "QSqlDatabase"
#include "QString"

addWordsWindow::addWordsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addWordsWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./WordsDB");
    if (db.open()){
        qDebug("DataBase has opened");
    }
    else {
        qDebug("Database hasn't opened.");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE words(word_id INT PRIMARY KEY, russian TEXT NO NULL, english TEXT NO NULL)");
    model = new QSqlTableModel(this, db);
    model->setTable("words");
    model->select();
    ui->tableView->setModel(model);


    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->setColumnWidth(0, 50);     // Первый столбец фиксированный
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch); // Второй растягивается
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
}

addWordsWindow::~addWordsWindow()
{
    delete ui;
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

    model->removeRow(row);
    model->select();
}


void addWordsWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void addWordsWindow::on_pushButton_3_clicked() //кнопка вернуться
{
    this->hide();
    MainWindow *mWindow = new MainWindow(this);
    mWindow->show();
}

