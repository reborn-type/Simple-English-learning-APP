#ifndef MODULS_H
#define MODULS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>


namespace Ui {
class moduls;
}

class moduls : public QDialog
{
    Q_OBJECT

public:
    explicit moduls(QWidget *parent = nullptr);
    ~moduls();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::moduls *ui;

    QSqlDatabase dbModuls;
    QSqlQuery *query;
    QSqlTableModel *modelModul;
    int row;
    int modulsNum;

    void closeDatabase();
};

#endif // MODULS_H
