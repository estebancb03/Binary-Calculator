#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QComboBox>
#include <QTextEdit>
#include <vector>
#include "validate.h"
#include "calculator.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Controller;
class MainWindow : public QMainWindow {
    Q_OBJECT
    public:

        /**
         * @brief MainWindow
         * @details Método constructor
         */
        MainWindow(QWidget *parent = nullptr);

        /**
         * @brief ~MainWindow
         * @details Método destructor
         */
        ~MainWindow();

    // Eventos
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
        Calculator* calculator;

       /**
        * @brief getDataFromComboBox
        * @details obtiene el texto seleccionado del comboBox
        * @param comboBox
        * @return texto seleccionado del comboBox
        */
        string getDataFromComboBox(QComboBox* comboBox);

        /**
         * @brief getIndexFromComboBox
         * @details obtiene el indice seleccionado del comboBox
         * @param comboBox
         * @return indice seleccionado del comboBox
         */
         int getIndexFromComboBox(QComboBox* comboBox);

        /**
         * @brief getDataFromTextEdit
         * @details obtiene el texto escrito en el textEdit
         * @param textEdit
         * @return texto escrito en el textEdit
         */
        string getDataFromTextEdit(QTextEdit* textEdit);

        /**
         * @brief clear
         * @details devuelve todos los elementos del form a su
         *          estado inicial
         */
        void clear();

        /**
         * @brief clearTextEdit
         * @details devuelve la personalización de colores del
         *          textEdit a su estado inicial
         * @param textEdit
         */
        void clearTextEdit(QTextEdit* textEdit);

        /**
         * @brief validateCalculateButton
         * @details habilita o deshabilita el botón de calculate
         *          dependiendo de las validaciones de los campos
         *          de ingreso de datos.
         * @return código de error
         */
        int validateCalculateButton();

        /**
         * @brief validateData
         * @details cambia la personalización de colores del textEdit
         *          dependiendo de la validación de los valores que
         *          el usuario ingresó
         * @param textEdit
         * @param comboBox
         * @return código de error
         */
        int validateData(QTextEdit* textEdit, QComboBox* comboBox);
};
#endif // MAINWINDOW_H
