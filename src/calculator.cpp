#include "calculator.h"

Calculator::Calculator() {

}

vector<string> Calculator :: calculate(int operation, vector<string> numbers, vector<string> types) {
    long int number1 = 0;
    long int number2 = 0;
    float result = 0;
    string binarySolution;
    string decimalSolution;
    vector<string> solutions;
    if (types[0] == "BINARY")
        number1 = convertToDecimal(std::stol(numbers[0]));
    else
        number1 = std::stol(numbers[0]);
    if (operation != 9) {
        if (types[1] == "BINARY")
            number2 = convertToDecimal(std::stol(numbers[1]));
        else
            number2 = std::stol(numbers[1]);
    }
    // Se invoca al método de Lenguaje Ensamblador
    //result = calculatorASM(number1, number2, operation);
    result = 10;
    decimalSolution = std::to_string(result);
    binarySolution = convertToBinary(result);
    solutions.push_back(binarySolution);
    solutions.push_back(decimalSolution);
    return solutions;
}

float Calculator :: convertToDecimal(int number) {
    int result = 0;
    int base = 1;
    int aux = number;
    while (aux) {
        int lastDigit = aux % 10;
        aux = aux / 10;
        result += lastDigit * base;
        base = base * 2;
    }
    return (float) result;
}

string Calculator :: convertToBinary(float number) {
    std::string binary;
    binary = std::bitset<sizeof number*8>(*(long unsigned int*)(&number)).to_string();
    return binary;
}
