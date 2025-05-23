#ifndef TRAINING_H
#define TRAINING_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class training;
}

class training : public QDialog
{
    Q_OBJECT

public:
    explicit training(QWidget *parent = nullptr);
    ~training();

private slots:
    void on_pushButton_clicked();

private:
    Ui::training *ui;
    QSqlDatabase dbTraining;
    QSqlQuery *queryTrainng;

    int maxWordId;                // Максимальный ID слова в базе данных
    int correctAnswers;           // Счетчик правильных ответов
    QString currentEnglish;       // Текущее английское слово
    QString currentRussian;

    void showNewWord();

};

#endif // TRAINING_H
