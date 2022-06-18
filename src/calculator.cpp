#include "calculator.h"

Calculator::Calculator() {

}


vector<string> Calculator :: calculate(int operation, vector<string> numbers, vector<string> types) {
    vector<string> results;
    long int number1 = 0;
    long int number2 = 0;
    long int binaryResult = 0;
    long int decimalResult = 0;
    string binary = "BINARY";

    if (types[0] == binary) {
        numbers[0] = to_string(convertToDecimal(std::stol(numbers[0])));
    }

    number1 = std::stol(numbers[0]);
    if (operation != 7) {
        if (types[1] == binary) {
            numbers[1] = to_string(convertToDecimal(std::stol(numbers[1])));
        }
        number2 = std::stol(numbers[1]);
    }
    switch(operation) {
        case 0: {
            decimalResult = number1 + number2;
        } break;
        case 1: {
            decimalResult = number1 - number2;
        } break;
        case 2: {
            decimalResult = number1 / number2;
        } break;
        case 3: {
            decimalResult = number1 * number2;
        } break;
        case 4: {
            decimalResult = 14;
        } break;
        case 5: {
            decimalResult = 15;
        } break;
        case 6: {
            decimalResult = 16;
        } break;
        case 7: {
            decimalResult = 17;
        } break;
    }

    results.push_back(convertToBinary(decimalResult));
    results.push_back(to_string(decimalResult));
    return results;
}

vector<string> Calculator :: convertAllToDecimal(vector<string> numbers, vector<string> types) {
    long int number = 0;
    long int newNumber = 0;
    vector<string> newNumbers;
    if (types[0] == "BINARY") {
        number = std::stol(numbers[0]);
        newNumber = convertToDecimal(number);
        newNumbers.push_back(to_string(newNumber));
        newNumbers.push_back(numbers[1]);
    }
    if (types[1] == "BINARY") {
        number = std::stol(numbers[1]);
        newNumber = convertToDecimal(number);
        newNumbers.push_back(numbers[0]);
        newNumbers.push_back(to_string(newNumber));
    }
    return newNumbers;
}

int Calculator :: convertToDecimal(int number) {
    int result = 0;
    int base = 1;
    int aux = number;
    while (aux) {
        int last_digit = aux % 10;
        aux = aux / 10;
        result += last_digit * base;
        base = base * 2;
    }
    return result;
}

string Calculator :: convertToBinary(int number) {
    string auxResult;
    string aux;
    while (number > 0) {
        if (number %2 == 0) {
            aux += "0";
        } else {
            aux += "1";
        }
        number /= 2;
    }
    for (int index = aux.length() - 1; index >= 0; --index)
        auxResult += aux.at(index);
    return auxResult;
}
