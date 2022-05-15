#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "mainwindow.h"
#include "validate.h"
using namespace std;

class MainWindow;

class Controller {
    MainWindow* window;
    Validate* validate;
    public:
        Controller();
        ~Controller();
        int pushValidate(string operation, string* numbers, string* type);
        int pullValidate();
        int pushCalculate(string operation, string* numbers, string* type);
        int* pullCalculate();
};

#endif // CONTROLLER_H
