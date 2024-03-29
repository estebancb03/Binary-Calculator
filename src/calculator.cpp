#include "calculator.h"

Calculator::Calculator() {

}

vector<string> Calculator :: calculate(int operation, vector<QString> numbers, vector<string> types) {
    float number1 = 0;
    float number2 = 0;
    float result = 0;
    string binarySolution;
    string decimalSolution;
    vector<string> solutions;

    if (types[0] == "BINARY")
        number1 = convertToDecimal(numbers[0].toFloat());
    else
        number1 = numbers[0].toFloat();
    if (operation != 7) {
        if (types[1] == "BINARY")
            number2 = convertToDecimal(numbers[1].toFloat());
        else
            number2 = numbers[1].toFloat();
    }

    alignas(16) float arrayA[4];
    alignas(16) float arrayB[4];
    alignas(16) float results[4];

    for (int index = 0; index < 4; ++index) {
        arrayA[index] = number1;
        arrayB[index] = number2;
        results[index] = 0.0;
    }

    // Se invoca al método de Lenguaje Ensamblador
    calculatorASM(arrayA, arrayB, operation, results);

    result = results[0];

    if (operation == 7)
        result -= results[0] * 2 + 1;

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
