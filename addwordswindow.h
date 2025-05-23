#ifndef ADDWORDSWINDOW_H
#define ADDWORDSWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class addWordsWindow;
}

class addWordsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit addWordsWindow(QWidget *parent = nullptr);
    ~addWordsWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::addWordsWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

    int row = -1;
    void closeDatabase();
};

#endif // ADDWORDSWINDOW_H
