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
private slots:
        void on_cleanPushButton_clicked();

        void on_calculatePushButton_clicked();

        void on_operationComboBox_currentTextChanged(const QString &arg1);

private:
        Ui::MainWindow *ui;
        string getDataFromComboBox(QComboBox* comboBox);
        string getDataFromTextEdit(QTextEdit* textEdit);
        void clear();
        void clearTextEdit(QTextEdit* textEdit);
};
#endif // MAINWINDOW_H
