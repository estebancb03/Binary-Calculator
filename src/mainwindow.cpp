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
