#include "modul_select.h"
#include "ui_modul_select.h"
#include "QSqlDatabase"
#include "moduls.h"
#include "moduls_training.h"


modul_select::modul_select(const QString &dbName, int modul_id,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::modul_select)
    , db_Selected_Moduls(QSqlDatabase::addDatabase("QSQLITE", dbName + "_connection"))
    , current_modul_id(modul_id)
{
    ui->setupUi(this);

    db_Selected_Moduls.setDatabaseName(dbName);
    if(!db_Selected_Moduls.open()){
        qDebug() << "Ошибка открытия БД: " << db_Selected_Moduls.lastError().text();
        return;
    }

    QSqlQuery query(db_Selected_Moduls);
    QString num_of_mId = QString::number(modul_id);
    QString db_ex = ("CREATE TABLE IF NOT EXISTS module_words_%1 ("
                     "modul_id INTEGER, "
                     "russian_word TEXT NO NULL, "
                     "english_word TEXT NO NULL, "
                     "word_id INTEGER PRIMARY KEY, "
                     "FOREIGN KEY(modul_id) REFERENCES ModulList(modul_id))");
    db_ex = db_ex.arg(num_of_mId);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);
    if(!query.exec(db_ex)){
        qDebug() << "Ошибка создания таблицы: " << query.lastError().text();
        return;
    }

    // Настраиваем модель и tableView
    model_Selected_Moduls = new QSqlTableModel(this, db_Selected_Moduls);
    model_Selected_Moduls->setTable(dbName);
    model_Selected_Moduls->select();


    ui->tableView->setModel(model_Selected_Moduls);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(3);
    QString exec_name = "SELECT name FROM ModulList WHERE ModulID = %1";
    exec_name = exec_name.arg(num_of_mId);
    query.exec(exec_name);
    QString name_of_modul;
    if(query.next()){
        name_of_modul = query.value(0).toString();
    }
}


modul_select::~modul_select()
{
    delete model_Selected_Moduls;
    db_Selected_Moduls.close();
    delete ui;
}


void modul_select::on_pushButton_clicked() //добавление
{

    QSqlQuery query(db_Selected_Moduls);
    QString num_of_mId = QString::number(current_modul_id);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);
    query.exec("SELECT MAX(word_id) FROM " + database_name);
    int maxId = 0;
    if (query.next()){
        maxId = query.value(0).toInt();
    }

    //Добавляем строку
    int newRow = model_Selected_Moduls->rowCount();
    model_Selected_Moduls->insertRow(newRow);

    model_Selected_Moduls->setData(model_Selected_Moduls->index(newRow, 3), maxId + 1); //эту строку юзаем когда нужно ставить данные в строку
    model_Selected_Moduls->setData(model_Selected_Moduls->index(newRow, 0), current_modul_id);
    model_Selected_Moduls->submitAll();
    model_Selected_Moduls->select();
}


void modul_select::on_pushButton_2_clicked() //удаление
{

    if(row < 0 || row >= model_Selected_Moduls->rowCount()) {
        QMessageBox::warning(this, "Ошибка!", "Не выбрана строка для удаления!");
        return;
    }

    // Запоминаем ID удаляемой строки
    int deletedId = model_Selected_Moduls->data(model_Selected_Moduls->index(row, 3)).toInt();

    model_Selected_Moduls->removeRow(row);

    db_Selected_Moduls.transaction();

    QSqlQuery updateQuery(db_Selected_Moduls);
    QString num_of_mId = QString::number(current_modul_id);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);
    updateQuery.prepare("UPDATE " + database_name + " SET word_id = word_id - 1 "
                                                    "WHERE word_id > ?");
    updateQuery.addBindValue(deletedId);

    model_Selected_Moduls->select();
    updateQuery.exec();
    db_Selected_Moduls.commit();

    model_Selected_Moduls->setFilter(model_Selected_Moduls->filter());
}


void modul_select::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void modul_select::on_pushButton_3_clicked() // вернуться
{
    this->hide();
    model_Selected_Moduls->submitAll();
    model_Selected_Moduls->select();
    moduls *page_of_all_moduls= new moduls(this);
    page_of_all_moduls->show();
}


void modul_select::on_pushButton_4_clicked()
{
    this->hide();
    model_Selected_Moduls->submitAll();
    model_Selected_Moduls->select();
    QString num_of_mId = QString::number(current_modul_id);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);
    moduls_training *ModulsTraining_window = new moduls_training(this, database_name);
    ModulsTraining_window->show();
}
