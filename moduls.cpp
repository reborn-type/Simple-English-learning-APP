#include "moduls.h"
#include "ui_moduls.h"
#include "mainwindow.h"
#include "QSqlDatabase"

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
    query->exec("CREATE TABLE ModulList(ModulID INT PRIMARY KEY, name TEXT NO NULL);");

    modelModul = new QSqlTableModel(this, dbModuls);
    modelModul->setTable("ModulList");
    modelModul->select();

    ui->tableView->setModel(modelModul);
}

moduls::~moduls()
{
    delete ui;
}

void moduls::on_pushButton_clicked()
{
    modelModul->insertRow(modelModul->rowCount());
    modelModul->submitAll();
}


void moduls::on_pushButton_2_clicked()
{
    modelModul->removeRow(row);
    modelModul->select();
}



void moduls::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void moduls::on_pushButton_3_clicked()
{
    this->hide();
    MainWindow *mWindow = new MainWindow(this);
    mWindow->show();
}


void moduls::on_tableView_doubleClicked(const QModelIndex &index)
{
    QMessageBox::information(this, "Информация", "Этот функционал еще не сделан");
}

