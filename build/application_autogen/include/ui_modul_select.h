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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_modul_select
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *modul_select)
    {
        if (modul_select->objectName().isEmpty())
            modul_select->setObjectName("modul_select");
        modul_select->resize(800, 600);
        modul_select->setStyleSheet(QString::fromUtf8("background-color: #5e69ee;"));
        gridLayout_2 = new QGridLayout(modul_select);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_4 = new QPushButton(modul_select);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Onest")});
        font.setPointSize(20);
        font.setBold(true);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 20px;\n"
"height: 50px;\n"
"border-radius: 10px;\n"
"background-color: #39AFEA;\n"
"color: #F4F4FB;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #18a0e3;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(modul_select);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Onest")});
        font1.setPointSize(13);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 15x;\n"
"height: 30px;\n"
"border-radius: 7px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(modul_select);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 15x;\n"
"height: 30px;\n"
"border-radius: 7px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(modul_select);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 15x;\n"
"height: 30px;\n"
"border-radius: 7px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        tableView = new QTableView(modul_select);
        tableView->setObjectName("tableView");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Onest")});
        font2.setPointSize(10);
        font2.setWeight(QFont::DemiBold);
        tableView->setFont(font2);
        tableView->setStyleSheet(QString::fromUtf8("background-color: #F4F4FB; \n"
"color: #5e69ee; \n"
"border-radius: 10px;\n"
""));

        gridLayout_2->addWidget(tableView, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);


        retranslateUi(modul_select);

        QMetaObject::connectSlotsByName(modul_select);
    } // setupUi

    void retranslateUi(QDialog *modul_select)
    {
        modul_select->setWindowTitle(QCoreApplication::translate("modul_select", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\264\321\203\320\273\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("modul_select", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("modul_select", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modul_select", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("modul_select", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modul_select: public Ui_modul_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODUL_SELECT_H
