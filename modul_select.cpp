#include "modul_select.h"
#include "ui_modul_select.h"

modul_select::modul_select(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::modul_select)
{
    ui->setupUi(this);


}

modul_select::~modul_select()
{
    delete ui;
}
