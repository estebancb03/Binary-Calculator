#include "calculator.h"

Calculator::Calculator() {

}

vector<string> Calculator :: calculate(int operation, vector<string> numbers, vector<string> types) {
    long int number1 = 0;
    long int number2 = 0;
    long int result = 0;
    string binarySolution;
    string decimalSolution;
    vector<string> solutions;
    if (types[0] == "BINARY")
        number1 = convertToDecimal(std::stol(numbers[0]));
    else
        number1 = std::stol(numbers[0]);
    if (operation != 7) {
        if (types[1] == "BINARY")
            number2 = convertToDecimal(std::stol(numbers[1]));
        else
            number2 = std::stol(numbers[1]);
    }
    // Se invoca al método de Lenguaje Ensamblador
    result = number1 + number2;
    decimalSolution = std::to_string(result);
    binarySolution = result >= 0 ? convertToBinary(result)
                                 : convertNegativeToBinary(result);
    solutions.push_back(binarySolution);
    solutions.push_back(decimalSolution);
    return solutions;
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
        int lastDigit = aux % 10;
        aux = aux / 10;
        result += lastDigit * base;
        base = base * 2;
    }
    return result;
}

string Calculator :: convertToBinary(int number) {
    string result;
    string aux;
    while (number > 0) {
        if (number %2 == 0)
            aux += "0";
        else
            aux += "1";
            number /= 2;
    }
    for (int index = aux.length() - 1; index >= 0; --index)
        result += aux.at(index);
    return result;
}

string Calculator :: convertNegativeToBinary(int number) {
    string result;
    string aux;
    string aux1;
    while(number < 0){
        if(number %2 == 0)
            aux += "1";
        else
            aux += "0";
        number /= 2;
    }

    for(int index = aux.length() - 1; index>=0 ;--index){
        aux1 = aux.at(index);
        aux1 == "0" ? result += "1" : result += "0";
    }
    return result;
}
