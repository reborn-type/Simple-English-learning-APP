#ifndef MODUL_SELECT_H
#define MODUL_SELECT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>

namespace Ui {
class modul_select;
}

class modul_select : public QDialog
{
    Q_OBJECT

public:
    explicit modul_select(const QString &dbName, int modul_id ,QWidget *parent = nullptr);
    ~modul_select();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked(   );

private:
    Ui::modul_select *ui;
    QSqlDatabase db_Selected_Moduls;
    QSqlTableModel *model_Selected_Moduls;
    int row = -1;
    int current_modul_id;
};

#endif // MODUL_SELECT_H
