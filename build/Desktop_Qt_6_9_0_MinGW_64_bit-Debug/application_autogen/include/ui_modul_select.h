/********************************************************************************
** Form generated from reading UI file 'modul_select.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODUL_SELECT_H
#define UI_MODUL_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_modul_select
{
public:

    void setupUi(QDialog *modul_select)
    {
        if (modul_select->objectName().isEmpty())
            modul_select->setObjectName("modul_select");
        modul_select->resize(800, 600);

        retranslateUi(modul_select);

        QMetaObject::connectSlotsByName(modul_select);
    } // setupUi

    void retranslateUi(QDialog *modul_select)
    {
        modul_select->setWindowTitle(QCoreApplication::translate("modul_select", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modul_select: public Ui_modul_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODUL_SELECT_H
