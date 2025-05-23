/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_moduls;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(813, 622);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: #5e69ee;\n"
"border-color:  #5e69ee;\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bannerll.png")));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 4, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Onest")});
        font.setPointSize(20);
        font.setWeight(QFont::ExtraBold);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 20x;\n"
"height: 60px;\n"
"border-radius: 15px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        gridLayout_3->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_moduls = new QPushButton(centralwidget);
        pushButton_moduls->setObjectName("pushButton_moduls");
        pushButton_moduls->setFont(font);
        pushButton_moduls->setAutoFillBackground(false);
        pushButton_moduls->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 20x;\n"
"height: 60px;\n"
"border-radius: 15px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        gridLayout_3->addWidget(pushButton_moduls, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 30, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262\320\260", nullptr));
        pushButton_moduls->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
