#include "calculator.h"

Calculator::Calculator() {

}

vector<string> Calculator :: calculate(int operation, vector<string> numbers, vector<string> types) {
    float number1 = 0;
    float number2 = 0;
    float result = 0;
    float test = 0;
    string binarySolution;
    string decimalSolution;
    vector<string> solutions;
    if (types[0] == "BINARY")
        number1 = convertToDecimal(std::stof(numbers[0]));
    else
        number1 = std::stof(numbers[0]);
    if (operation != 7) {
        if (types[1] == "BINARY")
            number2 = convertToDecimal(std::stof(numbers[1]));
        else
            number2 = std::stof(numbers[1]);
    }

    alignas(16) float arrayA[4];
    alignas(16) float arrayB[4];
    alignas(16) float results[4];

    for (int index = 0; index < 4; ++index) {
        arrayA[index] = 10.3;
        arrayB[index] = 12.4;
        results[index] = 0.0;
    }

    calculatorASM(arrayA, arrayB, operation, results);

    // Se invoca al método de Lenguaje Ensamblador
    result = results[0];
    std::cout << "Number1: " << std::stof(numbers[0]) << std::endl;
    std::cout << "Number2: " << numbers[1] << std::endl;
    std::cout << "Result: " << result << std::endl;
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
