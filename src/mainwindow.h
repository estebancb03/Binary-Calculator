#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QComboBox>>
#include <QTextEdit>>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Controller;

class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        void setController(Controller* c) { controller = c; }
    private:
        Ui::MainWindow *ui;
        Controller* controller;
        string getDataFromComboBox(QComboBox* comboBox);
        string getDataFromTExtEdit(QTextEdit* textEdit);
};
#endif // MAINWINDOW_H
