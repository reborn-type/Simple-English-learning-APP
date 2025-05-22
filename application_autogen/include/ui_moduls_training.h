/********************************************************************************
** Form generated from reading UI file 'moduls_training.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULS_TRAINING_H
#define UI_MODULS_TRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_moduls_training
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *word_input;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;
    QLabel *word_label;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *moduls_training)
    {
        if (moduls_training->objectName().isEmpty())
            moduls_training->setObjectName("moduls_training");
        moduls_training->resize(800, 600);
        moduls_training->setStyleSheet(QString::fromUtf8("background-color: #5e69ee;"));
        gridLayout = new QGridLayout(moduls_training);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 50, -1, 60);
        word_input = new QLineEdit(moduls_training);
        word_input->setObjectName("word_input");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(word_input->sizePolicy().hasHeightForWidth());
        word_input->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Onest")});
        font.setPointSize(14);
        font.setBold(true);
        word_input->setFont(font);
        word_input->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 */\n"
"    height: 40px;              /* \320\236\320\277\321\202\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\321\213\321\201\320\276\321\202\320\260 \320\264\320\273\321\217 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 */\n"
"    border-radius: 15px;       /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 \320\272\320\260\320\272 \321\203 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    padding: 0 15px;           /* \320\236\321\202\321\201\321\202\321\203\320\277 \321\202\320\265\320\272\321\201\321\202\320\260 \320\276\321\202 \320\272\321\200\320\260\320\265\320\262 */    \n"
"    \n"
"    /* \320\246\320\262\320\265\321\202\320\276\320\262\320\260\321\217 \321\201\321\205\320\265\320\274\320\260 */\n"
"   "
                        " background-color: #F4F4FB;  /* \320\241\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\271 \321\201 \320\263\320\276\320\273\321\203\320\261\321\213\320\274 \320\276\321\202\321\202\320\265\320\275\320\272\320\276\320\274 */\n"
"    color: #5e69ee;            /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \321\201\320\270\320\275\320\270\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border: 2px solid #D6D6F0; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262 \321\202\320\276\320\275 \321\204\320\276\320\275\320\260 */\n"
"    \n"
"    /* \320\255\321\204\321\204\320\265\320\272\321\202\321\213 \321\202\320\265\320\275\320\270 */\n"
"    selection-background-color: #5e69ee; /* \320\246\320\262\320\265\321\202 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    selection-color: white;\n"
"}\n"
"\n"
"/* \320\241"
                        "\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"QLineEdit:hover {\n"
"    background-color: #E8E8F8;\n"
"    border: 2px solid #C6C6EE;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    background-color: #F4F4FB;\n"
"    border: 2px solid #5e69ee;  /* \320\220\320\272\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\320\270\320\275\321\217\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    color: #4955ec;             /* \320\247\321\203\321\202\321\214 \320\261\320\276\320\273\320\265\320\265 \321\202\320\265\320\274\320\275\321\213\320\271 \321\201\320\270\320\275\320\270\320\271 */\n"
"}"));

        verticalLayout->addWidget(word_input);

        pushButton = new QPushButton(moduls_training);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Onest")});
        font1.setPointSize(13);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 30x;\n"
"height: 35px;\n"
"border-radius: 7px;\n"
"background-color: #F4F4FB;\n"
"color: #5e69ee;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ddddf3; \n"
"    color: #4955ec;\n"
"}"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 5, 1, 1, 1);

        progressBar = new QProgressBar(moduls_training);
        progressBar->setObjectName("progressBar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setMinimumSize(QSize(500, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Onest")});
        font2.setWeight(QFont::Black);
        font2.setStyleStrategy(QFont::PreferDefault);
        progressBar->setFont(font2);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    /* \320\236\320\261\321\211\320\270\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 */\n"
"    height: 12px;\n"
"    border-radius: 6px;\n"
"    background-color: #F4F4FB;\n"
"    border: 1px solid #4451eb;\n"
"    text-align: center;\n"
"    font-size: 10px;\n"
"    color: #5e69ee;\n"
"}\n"
"\n"
"/* \320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\260\321\217 \321\207\320\260\321\201\321\202\321\214 */\n"
"QProgressBar::chunk {\n"
"    background-color: #4451eb;\n"
"\n"
"}"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(42, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        word_label = new QLabel(moduls_training);
        word_label->setObjectName("word_label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Onest")});
        font3.setPointSize(40);
        font3.setWeight(QFont::Black);
        font3.setStrikeOut(false);
        word_label->setFont(font3);
        word_label->setStyleSheet(QString::fromUtf8("color: #F4F4FB; "));
        word_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(word_label, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);


        retranslateUi(moduls_training);

        QMetaObject::connectSlotsByName(moduls_training);
    } // setupUi

    void retranslateUi(QDialog *moduls_training)
    {
        moduls_training->setWindowTitle(QCoreApplication::translate("moduls_training", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260 \320\274\320\276\320\264\321\203\320\273\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("moduls_training", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        word_label->setText(QCoreApplication::translate("moduls_training", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moduls_training: public Ui_moduls_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULS_TRAINING_H
