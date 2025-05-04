#include "training.h"
#include "ui_training.h"
#include "mainwindow.h"
#include "QString"
#include "QSqlDatabase"


training::training(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::training)
{
    ui->setupUi(this);
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

training::~training()
{
    delete ui;
}

void training::on_pushButton_clicked()
{
    QString inputed_word = ui->word_input->text();
    queryTrainng->exec("SELECT MAX(word_id) FROM words");
    int maxId = 0;
    if (queryTrainng->next()){
        maxId = queryTrainng->value(0).toInt();
    };
    int numOfRandId = rand()%maxId;
    QString eng_word, ru_word;
    if (queryTrainng->next()){
        eng_word = queryTrainng->value(0).toString();
    };
    queryTrainng->exec("SELECT russian FROM words WHERE word_id = " + QString::number(numOfRandId));
    if (queryTrainng->next()){
        ru_word = queryTrainng->value(0).toString();
    };
    if(inputed_word == ru_word){
        res_of_pb += 10;
        ui->progressBar->setValue(res_of_pb);
    }



}

