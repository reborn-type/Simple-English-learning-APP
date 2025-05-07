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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modul_select
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *modul_select)
    {
        if (modul_select->objectName().isEmpty())
            modul_select->setObjectName("modul_select");
        modul_select->resize(800, 600);
        tableView = new QTableView(modul_select);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(110, 80, 591, 431));
        label = new QLabel(modul_select);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 49, 16));
        label_2 = new QLabel(modul_select);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 50, 201, 16));
        horizontalLayoutWidget = new QWidget(modul_select);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 520, 581, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(modul_select);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 550, 91, 31));

        retranslateUi(modul_select);

        QMetaObject::connectSlotsByName(modul_select);
    } // setupUi

    void retranslateUi(QDialog *modul_select)
    {
        modul_select->setWindowTitle(QCoreApplication::translate("modul_select", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modul_select", "Module:", nullptr));
        label_2->setText(QCoreApplication::translate("modul_select", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("modul_select", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modul_select", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("modul_select", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        pushButton_4->setText(QCoreApplication::translate("modul_select", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modul_select: public Ui_modul_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODUL_SELECT_H
