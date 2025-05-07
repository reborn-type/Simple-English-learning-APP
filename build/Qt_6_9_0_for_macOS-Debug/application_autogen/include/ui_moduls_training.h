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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_moduls_training
{
public:
    QLabel *word_label;
    QProgressBar *progressBar;
    QLineEdit *word_input;
    QPushButton *pushButton;

    void setupUi(QDialog *moduls_training)
    {
        if (moduls_training->objectName().isEmpty())
            moduls_training->setObjectName("moduls_training");
        moduls_training->resize(800, 600);
        word_label = new QLabel(moduls_training);
        word_label->setObjectName("word_label");
        word_label->setGeometry(QRect(210, 210, 371, 191));
        QFont font;
        font.setPointSize(40);
        word_label->setFont(font);
        word_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        progressBar = new QProgressBar(moduls_training);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(180, 80, 451, 23));
        progressBar->setValue(0);
        word_input = new QLineEdit(moduls_training);
        word_input->setObjectName("word_input");
        word_input->setGeometry(QRect(170, 400, 431, 31));
        pushButton = new QPushButton(moduls_training);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 400, 101, 32));

        retranslateUi(moduls_training);

        QMetaObject::connectSlotsByName(moduls_training);
    } // setupUi

    void retranslateUi(QDialog *moduls_training)
    {
        moduls_training->setWindowTitle(QCoreApplication::translate("moduls_training", "Dialog", nullptr));
        word_label->setText(QCoreApplication::translate("moduls_training", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("moduls_training", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moduls_training: public Ui_moduls_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULS_TRAINING_H
