#include "controller.h"

Controller::Controller() {
    validate = new Validate();
    window = new MainWindow(nullptr);
    window -> setController(this);
    window -> show();
}

int Controller :: pushValidate(string operation, string* numbers, string* type) {
    return validate -> push(operation, numbers, type);
}

int Controller :: pullValidate() {
    return validate -> pull();
}
