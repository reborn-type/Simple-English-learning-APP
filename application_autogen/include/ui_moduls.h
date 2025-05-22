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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_moduls
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *moduls)
    {
        if (moduls->objectName().isEmpty())
            moduls->setObjectName("moduls");
        moduls->resize(800, 600);
        moduls->setStyleSheet(QString::fromUtf8("background-color: #5e69ee; "));
        gridLayout = new QGridLayout(moduls);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        tableView = new QTableView(moduls);
        tableView->setObjectName("tableView");
        QFont font;
        font.setFamilies({QString::fromUtf8("Onest")});
        font.setPointSize(10);
        font.setWeight(QFont::DemiBold);
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: #F4F4FB; \n"
"color: #5e69ee; \n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QTableView::item:focus {\n"
"    border: 1px solid #5e69ee;\n"
"    background-color: #F4F4FB;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #5e69ee;\n"
"    color: white;\n"
"}"));

        gridLayout->addWidget(tableView, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(moduls);
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

        pushButton_2 = new QPushButton(moduls);
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

        pushButton_3 = new QPushButton(moduls);
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


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);


        retranslateUi(moduls);

        QMetaObject::connectSlotsByName(moduls);
    } // setupUi

    void retranslateUi(QDialog *moduls)
    {
        moduls->setWindowTitle(QCoreApplication::translate("moduls", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\274\320\276\320\264\321\203\320\273\320\265\320\271", nullptr));
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
