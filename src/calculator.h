#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>>
#include <vector>
using namespace std;

class Calculator {
    public:
        Calculator();
        ~Calculator();
        string calculate(string operation, vector<string> numbers, vector<string> types);

    private:
        int convertToBinary(int number);
        int convertToDecimal(int number);
        int addition(int num1, int num2);
        int subtraction(int num1, int num2);
        int division(int num1, int num2);
        int multiplication(int num1, int num2);
        int OR(int num1, int num2);
        int AND(int num1, int num2);
        int XOR(int num1, int num2);
        int NOT(int num);
};

#endif // CALCULATOR_H
