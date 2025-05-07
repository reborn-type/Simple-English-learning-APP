#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addwordswindow.h"
#include "moduls.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Деструктор
MainWindow::~MainWindow()
{
    delete ui;
}

//Переход в слова
void MainWindow::on_pushButton_clicked()
{
    this->hide();
    addWordsWindow *wordsWindow = new addWordsWindow(this);
    wordsWindow->show();
}

//Shortcut на масштабирование по F11
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_F11) {
        if (isFullScreen()) {
            showNormal(); // Выход из полноэкранного режима
        } else {
            showFullScreen(); // Вход в полноэкранный режим
        }
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

//Переход на модули
void MainWindow::on_pushButton_moduls_clicked()
{
    this->hide();
    moduls *modul = new moduls(this);
    modul->show();
}

