/********************************************************************************
** Form generated from reading UI file 'addwordswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDSWINDOW_H
#define UI_ADDWORDSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_addWordsWindow
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *addWordsWindow)
    {
        if (addWordsWindow->objectName().isEmpty())
            addWordsWindow->setObjectName("addWordsWindow");
        addWordsWindow->setEnabled(true);
        addWordsWindow->resize(800, 600);
        gridLayout_2 = new QGridLayout(addWordsWindow);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(addWordsWindow);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 120, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 2);

        tableView = new QTableView(addWordsWindow);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(addWordsWindow);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 5, 1, 1, 1);

        label = new QLabel(addWordsWindow);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);


        retranslateUi(addWordsWindow);

        QMetaObject::connectSlotsByName(addWordsWindow);
    } // setupUi

    void retranslateUi(QDialog *addWordsWindow)
    {
        addWordsWindow->setWindowTitle(QCoreApplication::translate("addWordsWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addWordsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addWordsWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("addWordsWindow", "Something from the table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWordsWindow: public Ui_addWordsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDSWINDOW_H
