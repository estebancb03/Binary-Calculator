#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui -> setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

string MainWindow :: getDataFromComboBox(QComboBox* comboBox) {
    return comboBox -> currentText().toStdString();
}

string MainWindow :: getDataFromTextEdit(QTextEdit* textEdit) {
    return textEdit -> toPlainText().toStdString();
}

void MainWindow :: clear() {
    ui -> operationComboBox -> setCurrentText("ADDITION ( + )");
    ui -> number1ComboBox -> setCurrentText("BINARY");
    ui -> number2ComboBox -> setCurrentText("BINARY");
    ui -> decimalSolutionTextEdit -> setText("");
    ui -> binarySolutionTextEdit -> setText("");
    ui -> number1TextEdit -> setText("");
    ui -> number2TextEdit -> setText("");
    ui -> number2TextEdit -> setEnabled(true);
    ui -> number2ComboBox -> setEnabled(true);
    clearTextEdit(ui -> number1TextEdit);
    clearTextEdit(ui -> number2TextEdit);
}

void MainWindow :: clearTextEdit(QTextEdit* textEdit) {
    textEdit -> setStyleSheet("background-color:rgba(44,44,44,255);");
    textEdit -> setStyleSheet("color: rgb(243, 243, 243);");
}

void MainWindow::on_cleanPushButton_clicked() {
    clear();
}

void MainWindow::on_calculatePushButton_clicked() {
    string type1 = getDataFromComboBox(ui -> number1ComboBox);
    string type2 = getDataFromComboBox(ui -> number2ComboBox);
    string number1 = getDataFromTextEdit(ui -> number1TextEdit);
    string number2 = getDataFromTextEdit(ui -> number2TextEdit);
    string operation = getDataFromComboBox(ui -> operationComboBox);
    string numbers[] = { number1, number2 };
    string types[] = { type1, type2 };
    if (number1 == "" || number2 == "") {
        if (number1 == "") {
            ui -> number1TextEdit -> setStyleSheet("background-color:red;");
        } else {
            clearTextEdit(ui -> number1TextEdit);
        }
        if (operation != "NOT ( ~ )" && number2 == "") {
            ui -> number2TextEdit -> setStyleSheet("background-color:red;");
        } else {
            clearTextEdit(ui -> number2TextEdit);
        }
    } else {
        clearTextEdit(ui -> number1TextEdit);
        clearTextEdit(ui -> number2TextEdit);
    }
}


void MainWindow::on_operationComboBox_currentTextChanged(const QString &arg1) {
    if (arg1 == "NOT ( ~ )") {
        ui -> number2TextEdit -> setText("");
        ui -> number2ComboBox -> setCurrentText("BINARY");
        ui -> number2TextEdit -> setEnabled(false);
        ui -> number2ComboBox -> setEnabled(false);
    } else {
        ui -> number2TextEdit -> setEnabled(true);
        ui -> number2ComboBox -> setEnabled(true);
    }
}

