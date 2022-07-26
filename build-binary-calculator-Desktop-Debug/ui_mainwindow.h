/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *operationLabel;
    QComboBox *operationComboBox;
    QLabel *number1Label;
    QTextEdit *number1TextEdit;
    QComboBox *number1ComboBox;
    QComboBox *number2ComboBox;
    QTextEdit *number2TextEdit;
    QLabel *number2Label;
    QFrame *line;
    QPushButton *cleanPushButton;
    QLabel *operationLabel_2;
    QLabel *binarySolutionLabel;
    QTextEdit *binarySolutionTextEdit;
    QLabel *decimalSolutionLabel;
    QTextEdit *decimalSolutionTextEdit;
    QPushButton *calculatePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(515, 530);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(44, 44, 44, 255);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        operationLabel = new QLabel(centralwidget);
        operationLabel->setObjectName(QString::fromUtf8("operationLabel"));
        operationLabel->setGeometry(QRect(40, 50, 91, 16));
        QFont font;
        font.setBold(true);
        operationLabel->setFont(font);
        operationLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        operationComboBox = new QComboBox(centralwidget);
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->setObjectName(QString::fromUtf8("operationComboBox"));
        operationComboBox->setEnabled(true);
        operationComboBox->setGeometry(QRect(130, 44, 351, 31));
        operationComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        operationComboBox->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        number1Label = new QLabel(centralwidget);
        number1Label->setObjectName(QString::fromUtf8("number1Label"));
        number1Label->setGeometry(QRect(40, 105, 91, 21));
        number1Label->setFont(font);
        number1Label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        number1TextEdit = new QTextEdit(centralwidget);
        number1TextEdit->setObjectName(QString::fromUtf8("number1TextEdit"));
        number1TextEdit->setEnabled(true);
        number1TextEdit->setGeometry(QRect(130, 100, 201, 31));
        number1TextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        number1TextEdit->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        number1ComboBox = new QComboBox(centralwidget);
        number1ComboBox->addItem(QString());
        number1ComboBox->addItem(QString());
        number1ComboBox->setObjectName(QString::fromUtf8("number1ComboBox"));
        number1ComboBox->setEnabled(true);
        number1ComboBox->setGeometry(QRect(350, 100, 131, 31));
        number1ComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        number1ComboBox->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        number2ComboBox = new QComboBox(centralwidget);
        number2ComboBox->addItem(QString());
        number2ComboBox->addItem(QString());
        number2ComboBox->setObjectName(QString::fromUtf8("number2ComboBox"));
        number2ComboBox->setEnabled(true);
        number2ComboBox->setGeometry(QRect(350, 145, 131, 31));
        number2ComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        number2ComboBox->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        number2TextEdit = new QTextEdit(centralwidget);
        number2TextEdit->setObjectName(QString::fromUtf8("number2TextEdit"));
        number2TextEdit->setEnabled(true);
        number2TextEdit->setGeometry(QRect(130, 145, 201, 31));
        number2TextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        number2TextEdit->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        number2Label = new QLabel(centralwidget);
        number2Label->setObjectName(QString::fromUtf8("number2Label"));
        number2Label->setGeometry(QRect(40, 150, 81, 21));
        number2Label->setFont(font);
        number2Label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 315, 441, 16));
        line->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);\n"
"border-color: rgb(243, 243, 243);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        cleanPushButton = new QPushButton(centralwidget);
        cleanPushButton->setObjectName(QString::fromUtf8("cleanPushButton"));
        cleanPushButton->setGeometry(QRect(40, 450, 441, 41));
        cleanPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        cleanPushButton->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        operationLabel_2 = new QLabel(centralwidget);
        operationLabel_2->setObjectName(QString::fromUtf8("operationLabel_2"));
        operationLabel_2->setGeometry(QRect(40, 280, 441, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        operationLabel_2->setFont(font1);
        operationLabel_2->setLayoutDirection(Qt::LeftToRight);
        operationLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        binarySolutionLabel = new QLabel(centralwidget);
        binarySolutionLabel->setObjectName(QString::fromUtf8("binarySolutionLabel"));
        binarySolutionLabel->setGeometry(QRect(40, 350, 131, 21));
        binarySolutionLabel->setFont(font);
        binarySolutionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        binarySolutionTextEdit = new QTextEdit(centralwidget);
        binarySolutionTextEdit->setObjectName(QString::fromUtf8("binarySolutionTextEdit"));
        binarySolutionTextEdit->setEnabled(false);
        binarySolutionTextEdit->setGeometry(QRect(190, 345, 281, 31));
        binarySolutionTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        binarySolutionTextEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(243, 243, 243);\n"
"color: rgb(243, 243, 243);"));
        decimalSolutionLabel = new QLabel(centralwidget);
        decimalSolutionLabel->setObjectName(QString::fromUtf8("decimalSolutionLabel"));
        decimalSolutionLabel->setGeometry(QRect(40, 395, 131, 21));
        decimalSolutionLabel->setFont(font);
        decimalSolutionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        decimalSolutionTextEdit = new QTextEdit(centralwidget);
        decimalSolutionTextEdit->setObjectName(QString::fromUtf8("decimalSolutionTextEdit"));
        decimalSolutionTextEdit->setEnabled(false);
        decimalSolutionTextEdit->setGeometry(QRect(190, 390, 281, 31));
        decimalSolutionTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        decimalSolutionTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);\n"
"selection-color: rgb(243, 243, 243);\n"
"selection-background-color: rgb(243, 243, 243);"));
        calculatePushButton = new QPushButton(centralwidget);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));
        calculatePushButton->setEnabled(false);
        calculatePushButton->setGeometry(QRect(40, 200, 441, 41));
        calculatePushButton->setCursor(QCursor(Qt::PointingHandCursor));
        calculatePushButton->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 515, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Binary Calculator", nullptr));
        operationLabel->setText(QCoreApplication::translate("MainWindow", "Operation", nullptr));
        operationComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "ADDITION ( + )", nullptr));
        operationComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "SUBTRACTION ( - )", nullptr));
        operationComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "DIVISION ( / )", nullptr));
        operationComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "MULTIPLICATION ( * )", nullptr));
        operationComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "OR ( | )", nullptr));
        operationComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "AND ( & )", nullptr));
        operationComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "XOR ( ^ )", nullptr));
        operationComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "NOT ( ~ )", nullptr));

        number1Label->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        number1ComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "BINARY", nullptr));
        number1ComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "DECIMAL", nullptr));

        number2ComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "BINARY", nullptr));
        number2ComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "DECIMAL", nullptr));

        number2Label->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        cleanPushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        operationLabel_2->setText(QCoreApplication::translate("MainWindow", "Solutions", nullptr));
        binarySolutionLabel->setText(QCoreApplication::translate("MainWindow", "Binary solution", nullptr));
        decimalSolutionLabel->setText(QCoreApplication::translate("MainWindow", "Decimal solution", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
