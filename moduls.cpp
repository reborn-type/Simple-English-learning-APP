#include "moduls.h"
#include "ui_moduls.h"
#include "mainwindow.h"
#include "QSqlDatabase"
#include "modul_select.h"

moduls::moduls(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::moduls)
{
    ui->setupUi(this);

    dbModuls = QSqlDatabase::addDatabase("QSQLITE");
    dbModuls.setDatabaseName("./WordsDB");
    if (dbModuls.open()){
        qDebug("DataBase has opened");
    }
    else {
        qDebug("Database hasn't opened.");
    }

    query = new QSqlQuery(dbModuls);
    query->exec("CREATE TABLE IF NOT EXISTS ModulList(ModulID INT PRIMARY KEY, name TEXT NO NULL);");

    modelModul = new QSqlTableModel(this, dbModuls);
    modelModul->setTable("ModulList");
    modelModul->select();

    ui->tableView->setModel(modelModul);

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableView->setColumnWidth(0, 50);     // Первый столбец фиксированный
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch); // Второй растягивается
    ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableView->hideColumn(0);
}

moduls::~moduls()
{
    delete modelModul;
    delete query;
    dbModuls.close();
    delete ui;
}

void moduls::on_pushButton_clicked()
{
    query->exec("SELECT MAX(ModulID) FROM ModulList");
    int maxId = 0;
    if (query->next()){
        maxId = query->value(0).toInt();
    }

    //Добавляем строку
    int newRow = modelModul->rowCount();
    modelModul->insertRow(newRow);

    modelModul->setData(modelModul->index(newRow, 0), maxId + 1);

    modelModul->submitAll();
    modelModul->select();
}


void moduls::on_pushButton_2_clicked() //удалить
{
    QString str_information = "Вы точно хотите удалить модуль - \"%1\"? После удаления все слова из него исчезнут!";
    str_information = str_information.arg(modelModul->data(modelModul->index(row, 1)).toString());
    QMessageBox::StandardButton chose = QMessageBox::critical(this, "Предупреждение!", str_information, QMessageBox::Yes | QMessageBox::No);
    if(chose == QMessageBox::Yes){
        if(row < 0 || row >= modelModul->rowCount()) {
            QMessageBox::warning(this, "Ошибка!", "Не выбрана строка для удаления!");
            return;
        }

        QSqlQuery query(dbModuls);
        int modul_id = modelModul->record(row).value("ModulID").toInt();
        QString num_of_mId = QString::number(modul_id);
        QString str = "DROP TABLE IF EXISTS module_words_%1";
        str = str.arg(num_of_mId);
        query.exec(str);
        modelModul->removeRow(row);
        modelModul->select();
    }
}

void moduls::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

void moduls::on_pushButton_3_clicked() // вернуться
{
    this->hide();
    MainWindow *mWindow = new MainWindow(this);
    mWindow->show();
}

void moduls::on_tableView_doubleClicked(const QModelIndex &index)
{
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if(!model){
        qDebug() << "Ошибка! Модель на является QSqlTableModel";
        return;
    }

    int row = index.row();

    int modul_id = model->record(row).value("ModulID").toInt();
    QString num_of_mId = QString::number(modul_id);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);

    QString dbName = database_name;

    QString exec_name = "SELECT name FROM ModulList WHERE ModulID = %1";
    exec_name = exec_name.arg(num_of_mId);
    query->exec(exec_name);
    QString name_of_modul;
    if(query->next()){
        name_of_modul = query->value(0).toString();
    }

    modul_select *mWindow = new modul_select(dbName, modul_id, this);
    mWindow->show();
    this->hide();
    modelModul->submitAll();
    modelModul->select();
}

