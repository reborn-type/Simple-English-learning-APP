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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_addWordsWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QTableView *tableView;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *addWordsWindow)
    {
        if (addWordsWindow->objectName().isEmpty())
            addWordsWindow->setObjectName("addWordsWindow");
        addWordsWindow->setEnabled(true);
        addWordsWindow->resize(800, 600);
        gridLayout = new QGridLayout(addWordsWindow);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(addWordsWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(addWordsWindow);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(addWordsWindow);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        tableView = new QTableView(addWordsWindow);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tableView, 1, 1, 1, 1);

        label = new QLabel(addWordsWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(addWordsWindow);

        QMetaObject::connectSlotsByName(addWordsWindow);
    } // setupUi

    void retranslateUi(QDialog *addWordsWindow)
    {
        addWordsWindow->setWindowTitle(QCoreApplication::translate("addWordsWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addWordsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addWordsWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addWordsWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 ", nullptr));
        label->setText(QCoreApplication::translate("addWordsWindow", "Something from the table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWordsWindow: public Ui_addWordsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDSWINDOW_H
