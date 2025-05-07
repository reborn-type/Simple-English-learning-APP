#include "moduls_training.h"
#include "ui_moduls_training.h"
#include "moduls.h"

moduls_training::moduls_training(QWidget *parent, const QString &dbName) :
    QDialog(parent),
    ui(new Ui::moduls_training),
    currentDbName(dbName),
    correctAnswers(0)
{
    ui->setupUi(this);

    if (!initializeDatabase()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось инициализировать базу данных");
        return;
    }

    srand(time(NULL));
    showNewWord();
}


bool moduls_training::initializeDatabase()
{
    // Создаем уникальное имя соединения
    QString connectionName = currentDbName + "_connection";
    dbModTr = QSqlDatabase::addDatabase("QSQLITE", connectionName);
    dbModTr.setDatabaseName(currentDbName);

    if (!dbModTr.open()) {
        qDebug() << "Ошибка открытия БД:" << dbModTr.lastError().text();
        return false;
    }

    queryModTr = new QSqlQuery(dbModTr);

    // Получаем максимальный ID слова
    if (!queryModTr->exec("SELECT MAX(word_id) FROM " + currentDbName) || !queryModTr->next()) {
        qDebug() << "Ошибка запроса:" << queryModTr->lastError().text();
        return false;
    }

    maxWordId = queryModTr->value(0).toInt();
    return true;
}


void moduls_training::showNewWord()
{
    // Реализация показа нового слова
    if (maxWordId <= 0) return;

    int randomId = rand() % maxWordId + 1;

    queryModTr->prepare("SELECT english_word, russian_word FROM " + currentDbName + " WHERE word_id = ?");
    queryModTr->addBindValue(randomId);

    if (!queryModTr->exec() || !queryModTr->next()) {
        qDebug() << "Ошибка получения слова:" << queryModTr->lastError().text();
        return;
    }

    currentEnglish = queryModTr->value(0).toString();
    currentRussian = queryModTr->value(1).toString();

    ui->word_label->setText(currentEnglish);
    ui->word_input->clear();
    ui->word_input->setFocus();
}


moduls_training::~moduls_training()
{
    delete queryModTr;
    dbModTr.close();
    delete ui;
}


void moduls_training::on_pushButton_clicked()
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
            moduls *returnWindow = new moduls();
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

