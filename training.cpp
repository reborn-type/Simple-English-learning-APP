#include "training.h"
#include "ui_training.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <ctime>
#include "addwordswindow.h"

training::training(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::training),
    correctAnswers(0)
{
    ui->setupUi(this);

    // Инициализация базы данных
    dbTraining = QSqlDatabase::addDatabase("QSQLITE");
    dbTraining.setDatabaseName("./WordsDB");

    if (!dbTraining.open()) {
        qDebug() << "Error: Failed to open database";
        QMessageBox::critical(this, "Error", "Failed to open database");
        return;
    }

    // Получаем максимальный ID для случайного выбора слов
    QSqlQuery maxIdQuery(dbTraining);
    if (!maxIdQuery.exec("SELECT MAX(word_id) FROM words") || !maxIdQuery.next()) {
        qDebug() << "Error: Failed to get max word_id";
        QMessageBox::critical(this, "Error", "Failed to get words from database");
        return;
    }

    maxWordId = maxIdQuery.value(0).toInt();
    if (maxWordId <= 0) {
        qDebug() << "Error: No words in database";
        QMessageBox::critical(this, "Error", "No words in database");
        return;
    }

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Показываем первое слово
    showNewWord();
}


training::~training()
{
    delete queryTrainng;
    dbTraining.close();
    delete ui;
}


void training::showNewWord()
{
    // Выбираем случайное слово из базы данных
    int randomId = rand() % maxWordId + 1;

    QSqlQuery query(dbTraining);
    query.prepare("SELECT english, russian FROM words WHERE word_id = ?");
    query.addBindValue(randomId);

    if (!query.exec() || !query.next()) {
        qDebug() << "Error: Failed to get word with id" << randomId;
        QMessageBox::critical(this, "Error", "Failed to get word from database");
        return;
    }

    currentEnglish = query.value(0).toString();
    currentRussian = query.value(1).toString();

    // Показываем английское слово пользователю
    ui->word_label->setText(currentEnglish);
    ui->word_input->clear();
    ui->word_input->setFocus();
}


void training::on_pushButton_clicked()
{
    QString userAnswer = ui->word_input->text().trimmed();

    if (userAnswer.isEmpty()) {
        QMessageBox::information(this, "Внимание", "Введите перевод слова!");
        return;
    }

    if (userAnswer.compare(currentRussian, Qt::CaseInsensitive) == 0) {
        correctAnswers++;
        ui->progressBar->setValue(correctAnswers * 10); // Увеличиваем прогресс-бар на 10

        if (correctAnswers >= 10) {
            QMessageBox::information(this, "Поздравляем", "Вы завершили тренировку!");
            this->accept(); // Закрываем окно тренировки
            addWordsWindow *returnWindow = new addWordsWindow(this);
            returnWindow->show();
            return;
        }

        QMessageBox::information(this, "Верно!", "Ответ правильный.");
        showNewWord(); // Показываем новое слово
    } else {
        QMessageBox::warning(this, "Ошибка!", QString("Неправильный ответ! Верный ответ это %1").arg(currentRussian));
        showNewWord(); // Показываем новое слово даже при неправильном ответе
    }
}
