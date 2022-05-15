#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui -> setupUi(this);
    validate = new Validate();
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

int MainWindow :: validateData(QTextEdit* textEdit, QComboBox* comboBox) {
    string type = getDataFromComboBox(comboBox);
    string number = getDataFromTextEdit(textEdit);
    int error = validate -> validateAll(number, type);
    if (error == EXIT_SUCCESS) {
        clearTextEdit(textEdit);
    } else {
        textEdit -> setStyleSheet("background-color:rgb(203,50,52);");
    }
    return error;
}

int MainWindow :: validateCalculateButton() {
    string type1 = getDataFromComboBox(ui -> number1ComboBox);
    string type2 = getDataFromComboBox(ui -> number2ComboBox);
    string number1 = getDataFromTextEdit(ui -> number1TextEdit);
    string number2 = getDataFromTextEdit(ui -> number2TextEdit);
    string operation = getDataFromComboBox(ui -> operationComboBox);
    int error1 = validate -> validateAll(number1, type1);
    int error2 = validate -> validateAll(number2, type2);
    if (operation == "NOT ( ~ )")
        error2 = EXIT_SUCCESS;
    if (error1 == EXIT_SUCCESS && error2 == EXIT_SUCCESS) {
        ui -> calculatePushButton -> setEnabled(true);
    } else {
        ui -> calculatePushButton -> setEnabled(false);
    }
    return EXIT_SUCCESS;
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
    //Invocar método principal de cálculo
}


void MainWindow::on_operationComboBox_currentTextChanged(const QString &arg1) {
    if (arg1 == "NOT ( ~ )") {
        ui -> number2TextEdit -> setText("");
        ui -> number2ComboBox -> setCurrentText("BINARY");
        ui -> number2TextEdit -> setEnabled(false);
        ui -> number2ComboBox -> setEnabled(false);
        clearTextEdit(ui -> number2TextEdit);
    } else {
        ui -> number2TextEdit -> setEnabled(true);
        ui -> number2ComboBox -> setEnabled(true);
    }
    validateCalculateButton();
}


void MainWindow::on_number1TextEdit_textChanged() {
    validateData(ui -> number1TextEdit, ui -> number1ComboBox);
    validateCalculateButton();
}


void MainWindow::on_number2TextEdit_selectionChanged() {

}


void MainWindow::on_number2TextEdit_textChanged() {
    string operation = getDataFromComboBox(ui -> operationComboBox);
    if (operation != "NOT ( ~ )") {
        validateData(ui -> number2TextEdit, ui -> number2ComboBox);
        validateCalculateButton();
    }
}


void MainWindow::on_number1ComboBox_currentTextChanged(const QString &arg1) {
    validateData(ui -> number1TextEdit, ui -> number1ComboBox);
    validateCalculateButton();
}


void MainWindow::on_number2ComboBox_currentTextChanged(const QString &arg1) {
    string operation = getDataFromComboBox(ui -> operationComboBox);
    if (operation != "NOT ( ~ )") {
        validateData(ui -> number2TextEdit, ui -> number2ComboBox);
        validateCalculateButton();
    }
}

