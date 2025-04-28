#include "addwordswindow.h"
#include "ui_addwordswindow.h"
#include "mainwindow.h"
#include "QSqlDatabase"

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
    query->exec("CREATE TABLE WordList(Russian Text, English TEXT, WordID INT);");

    model = new QSqlTableModel(this, db);
    model->setTable("WordList");
    model->select();

    ui->tableView->setModel(model);
}

addWordsWindow::~addWordsWindow()
{
    delete ui;
}

void addWordsWindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
    model->submitAll();
}


void addWordsWindow::on_pushButton_2_clicked()
{
    model->removeRow(row);
    model->select();
}


void addWordsWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

