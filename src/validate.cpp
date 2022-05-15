#include "validate.h"
#include <iostream>

Validate::Validate() {

}

int Validate :: push(string operation, string* numbers, string* type) {
    this -> operation = operation;
    this -> numbers = numbers;
    this -> type = type;
    return EXIT_SUCCESS;
}

int Validate :: pull() {
    int error = EXIT_SUCCESS;
    int size = sizeof this -> numbers / sizeof this -> numbers[0];
    if (this -> operation == "NOT ( ~ )") {
        error = validateNumber(numbers[0]);
        if (this -> type[0] == "Binary")
            error = validateBinary(numbers[0]);
    } else {
        if (size != 2)
            error = EXIT_FAILURE;
        for (int index = 0; index < size && error == EXIT_SUCCESS; ++index) {
            error = validateNumber(this -> numbers[index]);
            if (this -> type[index] == "Binary")
                error = validateBinary(this -> numbers[index]);
        }
    }
    return error;
}

int Validate :: validateBinary(string number) {
    int error = EXIT_SUCCESS;
    for (int index = 0; number[index] && error == EXIT_SUCCESS; ++index) {
        int currentNumber = (int) number[index];
        if (currentNumber != 0 && currentNumber != 1)
            error = EXIT_FAILURE;
    }
    return error;
}

int Validate :: validateNumber(string number) {
    int error = EXIT_SUCCESS;
    if(number[0] == '-') {
        for (int index = 1; number[index] && error == EXIT_SUCCESS; ++index) {
            if (!isdigit(number[index]))
                error = EXIT_FAILURE;
        }
    } else {
        for (int index = 0; number[index] && error == EXIT_SUCCESS; ++index) {
            if (!isdigit(number[index]))
                error = EXIT_FAILURE;
        }
    }
    return error;
}
