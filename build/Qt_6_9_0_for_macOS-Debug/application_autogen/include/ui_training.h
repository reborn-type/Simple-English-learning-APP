/********************************************************************************
** Form generated from reading UI file 'training.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINING_H
#define UI_TRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_training
{
public:
    QProgressBar *progressBar;
    QLabel *word_label;
    QLineEdit *word_input;
    QPushButton *pushButton;

    void setupUi(QDialog *training)
    {
        if (training->objectName().isEmpty())
            training->setObjectName("training");
        training->resize(800, 600);
        progressBar = new QProgressBar(training);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(200, 50, 401, 23));
        progressBar->setValue(0);
        word_label = new QLabel(training);
        word_label->setObjectName("word_label");
        word_label->setGeometry(QRect(230, 200, 341, 131));
        QFont font;
        font.setPointSize(30);
        word_label->setFont(font);
        word_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        word_input = new QLineEdit(training);
        word_input->setObjectName("word_input");
        word_input->setGeometry(QRect(150, 400, 481, 31));
        pushButton = new QPushButton(training);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 400, 101, 32));

        retranslateUi(training);

        QMetaObject::connectSlotsByName(training);
    } // setupUi

    void retranslateUi(QDialog *training)
    {
        training->setWindowTitle(QCoreApplication::translate("training", "Dialog", nullptr));
        word_label->setText(QCoreApplication::translate("training", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("training", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class training: public Ui_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINING_H
