#ifndef MODULS_TRAINING_H
#define MODULS_TRAINING_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class moduls_training;
}

class moduls_training : public QDialog
{
    Q_OBJECT

public:
    explicit moduls_training(QWidget *parent = nullptr, const QString &dbName = QString());
    ~moduls_training();

private slots:
    void on_pushButton_clicked();

private:
    Ui::moduls_training *ui;
    QSqlDatabase dbModTr;
    QSqlQuery *queryModTr;
    QString currentDbName;  //одно поле для имени БД
    int maxWordId;
    int correctAnswers;
    QString currentEnglish;
    QString currentRussian;

    void showNewWord();
    bool initializeDatabase();  // метод для инициализации БД
};

#endif // MODULS_TRAINING_H
