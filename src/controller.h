#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "mainwindow.h"
using namespace std;

class MainWindow;

class Controller {
    MainWindow *window;
    public:
        Controller();
        ~Controller();
        int pushValidate(string operation, string numbers[], string type[]);
        int pullValidate();
        int pushCalculate(string operation, int numbers[], string type[]);
        int* pullCalculate();
};

#endif // CONTROLLER_H
