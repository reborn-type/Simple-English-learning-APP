#ifndef MODUL_TRAINING_H
#define MODUL_TRAINING_H

#include <QMainWindow>

namespace Ui {
class modul_training;
}

class modul_training : public QMainWindow
{
    Q_OBJECT

public:
    explicit modul_training(QWidget *parent = nullptr);
    ~modul_training();

private:
    Ui::modul_training *ui;

    QSqlDatabase dbModuls;
    QSqlQuery *query;
    QSqlTableModel *modelModul;
    int row;
    int modulsNum;
    QString global_database_name;
};

#endif // MODUL_TRAINING_H
