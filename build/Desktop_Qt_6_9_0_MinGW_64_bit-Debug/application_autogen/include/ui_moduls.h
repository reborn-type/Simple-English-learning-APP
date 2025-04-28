/********************************************************************************
** Form generated from reading UI file 'moduls.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULS_H
#define UI_MODULS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_moduls
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *moduls)
    {
        if (moduls->objectName().isEmpty())
            moduls->setObjectName("moduls");
        moduls->resize(800, 600);
        verticalLayout = new QVBoxLayout(moduls);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(moduls);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        pushButton = new QPushButton(moduls);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(moduls);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(moduls);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(moduls);

        QMetaObject::connectSlotsByName(moduls);
    } // setupUi

    void retranslateUi(QDialog *moduls)
    {
        moduls->setWindowTitle(QCoreApplication::translate("moduls", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("moduls", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\276\320\264\321\203\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("moduls", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\274\320\276\320\264\321\203\320\273\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("moduls", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moduls: public Ui_moduls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULS_H
