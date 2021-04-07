/********************************************************************************
** Form generated from reading UI file 'stopwatch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPWATCH_H
#define UI_STOPWATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stopwatch
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *reset;

    void setupUi(QDialog *Stopwatch)
    {
        if (Stopwatch->objectName().isEmpty())
            Stopwatch->setObjectName(QString::fromUtf8("Stopwatch"));
        Stopwatch->resize(800, 600);
        groupBox = new QGroupBox(Stopwatch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 40, 221, 201));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 113, 20));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 50, 81, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(widget);
        start->setObjectName(QString::fromUtf8("start"));

        verticalLayout->addWidget(start);

        stop = new QPushButton(widget);
        stop->setObjectName(QString::fromUtf8("stop"));

        verticalLayout->addWidget(stop);

        reset = new QPushButton(widget);
        reset->setObjectName(QString::fromUtf8("reset"));

        verticalLayout->addWidget(reset);


        retranslateUi(Stopwatch);

        QMetaObject::connectSlotsByName(Stopwatch);
    } // setupUi

    void retranslateUi(QDialog *Stopwatch)
    {
        Stopwatch->setWindowTitle(QCoreApplication::translate("Stopwatch", "Stopwatch", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Stopwatch", "Stopwatch", nullptr));
        start->setText(QCoreApplication::translate("Stopwatch", "start", nullptr));
        stop->setText(QCoreApplication::translate("Stopwatch", "stop", nullptr));
        reset->setText(QCoreApplication::translate("Stopwatch", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stopwatch: public Ui_Stopwatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCH_H
