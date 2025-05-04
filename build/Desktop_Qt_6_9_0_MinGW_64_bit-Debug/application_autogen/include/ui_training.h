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
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_training
{
public:
    QProgressBar *progressBar;

    void setupUi(QDialog *training)
    {
        if (training->objectName().isEmpty())
            training->setObjectName("training");
        training->resize(800, 600);
        progressBar = new QProgressBar(training);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(200, 50, 401, 23));
        progressBar->setValue(24);

        retranslateUi(training);

        QMetaObject::connectSlotsByName(training);
    } // setupUi

    void retranslateUi(QDialog *training)
    {
        training->setWindowTitle(QCoreApplication::translate("training", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class training: public Ui_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINING_H
