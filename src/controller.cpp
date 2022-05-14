#include "controller.h"

Controller::Controller() {
    window = new MainWindow(nullptr);
    window -> show();
}
