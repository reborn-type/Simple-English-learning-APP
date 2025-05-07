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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addWordsWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;

    void setupUi(QDialog *addWordsWindow)
    {
        if (addWordsWindow->objectName().isEmpty())
            addWordsWindow->setObjectName("addWordsWindow");
        addWordsWindow->setEnabled(true);
        addWordsWindow->resize(800, 600);
        addWordsWindow->setStyleSheet(QString::fromUtf8("background-color: #050505;"));
        gridLayout = new QGridLayout(addWordsWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tableView = new QTableView(addWordsWindow);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"   	   background-color: #7c7c7a;  \n"
"       color: #cececd;         \n"
"       gridline-color: #5e5e5d;    \n"
"       border: 1px solid #5e5e5d; \n"
"    }\n"
"    \n"
"    QTableView::item {\n"
"       padding: 5px;             \n"
"    }\n"
"    \n"
"    QTableView::item:selected {\n"
"       background-color: #5e5e5d; \n"
"       color: #ffffff;            \n"
"    }\n"
"    \n"
"    QHeaderView::section {\n"
"       background-color: #5e5e5d;\n"
"       color: #cececd;             \n"
"       padding: 5px;\n"
"       border: 1px solid #7c7c7a;\n"
"    }\n"
"    \n"
"    QScrollBar:vertical {\n"
"       background: #5e5e5d;   \n"
"       width: 12px;       \n"
"    }\n"
"    \n"
"    QScrollBar::handle:vertical {\n"
"       background: #7c7c7a;        \n"
"       min-height: 20px;\n"
"    }\n"
"    \n"
"    QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"       background: none;\n"
"    }"));

        gridLayout->addWidget(tableView, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

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

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(150, 10, 150, 10);
        pushButton_4 = new QPushButton(addWordsWindow);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("RuneScape-ENA")});
        font.setPointSize(40);
        font.setBold(false);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("width: 20px;\n"
"height: 40px;\n"
"border-radius: 10px;\n"
"background-color: #252525;\n"
"color: #cececd;"));

        verticalLayout->addWidget(pushButton_4);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);


        retranslateUi(addWordsWindow);

        QMetaObject::connectSlotsByName(addWordsWindow);
    } // setupUi

    void retranslateUi(QDialog *addWordsWindow)
    {
        addWordsWindow->setWindowTitle(QCoreApplication::translate("addWordsWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addWordsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addWordsWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addWordsWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addWordsWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWordsWindow: public Ui_addWordsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDSWINDOW_H
