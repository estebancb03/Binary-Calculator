#include "controller.h"

Controller::Controller() {
    validate = new Validate();
    window = new MainWindow(nullptr);
    window -> setController(this);
    window -> show();
}
