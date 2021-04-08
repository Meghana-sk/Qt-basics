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
    QPushButton *close;

    void setupUi(QDialog *Stopwatch)
    {
        if (Stopwatch->objectName().isEmpty())
            Stopwatch->setObjectName(QString::fromUtf8("Stopwatch"));
        Stopwatch->resize(685, 600);
        groupBox = new QGroupBox(Stopwatch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 40, 251, 241));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(85, 85, 127);\n"
"color: white;\n"
"font: bold;\n"
"}\n"
"\n"
""));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 40, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black\n"
"\n"
"}"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 80, 81, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(widget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: grey;\n"
"	color: blue;\n"
"font: bold;\n"
"}"));

        verticalLayout->addWidget(start);

        stop = new QPushButton(widget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: grey;\n"
"	color: blue;\n"
"	font: bold;\n"
"}"));

        verticalLayout->addWidget(stop);

        reset = new QPushButton(widget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: grey;\n"
"	color: blue;\n"
"	font: bold;\n"
"\n"
"}"));
        reset->setFlat(false);

        verticalLayout->addWidget(reset);

        close = new QPushButton(groupBox);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(190, 10, 51, 23));
        close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: blue;\n"
"color: red;\n"
"font: bold;\n"
"\n"
"}"));

        retranslateUi(Stopwatch);

        reset->setDefault(true);


        QMetaObject::connectSlotsByName(Stopwatch);
    } // setupUi

    void retranslateUi(QDialog *Stopwatch)
    {
        Stopwatch->setWindowTitle(QCoreApplication::translate("Stopwatch", "Stopwatch", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Stopwatch", "                              Stopwatch", nullptr));
        start->setText(QCoreApplication::translate("Stopwatch", "start", nullptr));
        stop->setText(QCoreApplication::translate("Stopwatch", "stop", nullptr));
        reset->setText(QCoreApplication::translate("Stopwatch", "reset", nullptr));
        close->setText(QCoreApplication::translate("Stopwatch", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stopwatch: public Ui_Stopwatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCH_H
