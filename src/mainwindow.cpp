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
}

void MainWindow::on_cleanPushButton_clicked() {
    clear();
}
