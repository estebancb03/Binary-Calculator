#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <sstream>
#include <bitset>
#include <QString>

using namespace std;
extern "C" int calculatorASM(const float* number1, const float* number2, int operation, float results[4]);

class Calculator {
    public:
        /**
         *  @brief Calculator
         *  @details Método constructor
         */
        Calculator();

        /**
         *  @brief ~Calculator
         *  @details Método destructor
         */
        ~Calculator();

        /**
         *  @brief calculate
         *  @details Invoca los métodos de cálculo y retorna un arreglo con los resultados
         *           en binario y en decimal
         *  @param operation
         *  @param numbers
         *  @param types
         *  @return Vector con las soluciones en binario y decimal
         */
        vector<string> calculate(int operation, vector<QString> numbers, vector<string> types);

    private:
        /**
         *  @brief convertToBinary
         *  @details Convierte un número de formato decimal a formato binario
         *  @param number
         *  @return El número en formato binario
         */
        string convertToBinary(float number);

        /**
         *  @brief convertToDecimal
         *  @details Convierte un número de formato binario a formato decimal
         *  @param number
         *  @return El número en formato decimal
         */
        float convertToDecimal(int number);
};

#endif // CALCULATOR_H
