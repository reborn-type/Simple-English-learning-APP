#include "modul_training.h"
#include "ui_modul_training.h"
#include "mainwindow.h"
#include "QString"
#include "QSqlDatabase"


modul_training::modul_training(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::modul_training)
{
    ui->setupUi(this);
}

modul_training::~modul_training()
{
    delete ui;

    ui->setupUi(this);

    QString num_of_mId = QString::number(modul_id);
    QString database_name = "module_words_%1"; //Имя дб с которой мы работаем
    database_name = database_name.arg(num_of_mId);

    dbTraining = QSqlDatabase::addDatabase("QSQLITE");
    dbTraining.setDatabaseName("./WordsDB");
    if (dbTraining.open()){
        qDebug("DataBase has opened");
    }
    else {
        qDebug("Database hasn't opened.");
    }
    model = new QSqlTableModel(this, dbTraining);
    model->setTable("words");
    model->select();
    queryTrainng = new QSqlQuery(dbTraining);

    srand(time(NULL));

    queryTrainng->exec("SELECT MAX(word_id) FROM words");
    int maxId = 0;
    if (queryTrainng->next()){
        maxId = queryTrainng->value(0).toInt();
    };
    int numOfRandId = rand()%maxId;
    queryTrainng->exec("SELECT english FROM words WHERE word_id = " + QString::number(numOfRandId));
    QString eng_word, ru_word;
    if (queryTrainng->next()){
        eng_word = queryTrainng->value(0).toString();
    };
    queryTrainng->exec("SELECT russian FROM words WHERE word_id = " + QString::number(numOfRandId));
    if (queryTrainng->next()){
        ru_word = queryTrainng->value(0).toString();
    };

    QString inputed_word = ui->word_input->text();

}




