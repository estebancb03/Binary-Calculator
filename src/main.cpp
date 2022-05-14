#include "mainwindow.h"
#include "controller.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Controller *controller = new Controller();
    return a.exec();
}
