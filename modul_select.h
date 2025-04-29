#ifndef MODUL_SELECT_H
#define MODUL_SELECT_H

#include <QDialog>

namespace Ui {
class modul_select;
}

class modul_select : public QDialog
{
    Q_OBJECT

public:
    explicit modul_select(QWidget *parent = nullptr);
    ~modul_select();

private:
    Ui::modul_select *ui;
};

#endif // MODUL_SELECT_H
