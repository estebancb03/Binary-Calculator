#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QComboBox>
#include <QTextEdit>
#include "validate.h"
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
private slots:
        void on_cleanPushButton_clicked();

        void on_calculatePushButton_clicked();

        void on_operationComboBox_currentTextChanged(const QString &arg1);

        void on_number1TextEdit_textChanged();

        void on_number2TextEdit_selectionChanged();

        void on_number2TextEdit_textChanged();

        void on_number1ComboBox_currentTextChanged(const QString &arg1);

        void on_number2ComboBox_currentTextChanged(const QString &arg1);

private:
        Ui::MainWindow *ui;
        Validate* validate;
        string getDataFromComboBox(QComboBox* comboBox);
        string getDataFromTextEdit(QTextEdit* textEdit);
        void clear();
        void clearTextEdit(QTextEdit* textEdit);
        int validateCalculateButton();
        int validateData(QTextEdit* textEdit, QComboBox* comboBox);
};
#endif // MAINWINDOW_H
