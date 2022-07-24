#include "validate.h"
#include <iostream>

Validate::Validate() {

}

int Validate :: validateAll(string number, string type) {
    int error = EXIT_SUCCESS;
    error = validateNumber(number);
    if(type == "BINARY" && error == EXIT_SUCCESS)
        error = validateBinary(number);
    return error;
}

int Validate :: validateEntry(string entry) {
    int error = EXIT_SUCCESS;
    if (entry == "")
        error = EXIT_FAILURE;
    return error;
}

int Validate :: validateBinary(string number) {
    int error = EXIT_SUCCESS;
    for (int index = 0; number[index] && error == EXIT_SUCCESS; ++index) {
        int currentNumber = (int) number[index];
        if (number[index] != '0' && number[index] != '1')
            error = EXIT_FAILURE;
    }
    return error;
}

int Validate :: validateNumber(string number) {
    int error = EXIT_SUCCESS;
    int points = 0;
    error = validateEntry(number);
    if(number[0] == '-') {
        for (int index = 1; number[index] && error == EXIT_SUCCESS; ++index) {
            if (number[1] == '.')
                error = EXIT_FAILURE;
            if (!isdigit(number[index]) && number[index] != '.')
                error = EXIT_FAILURE;
            if (number[index] == '.') {
                ++points;
            }
        }
    } else {
        for (int index = 0; number[index] && error == EXIT_SUCCESS; ++index) {
            if (!isdigit(number[index]) && number[index] != '.')
                error = EXIT_FAILURE;
            if (number[index] == '.')
                ++points;
        }
    }
    if (points > 1)
        error = EXIT_FAILURE;

    return error;
}
