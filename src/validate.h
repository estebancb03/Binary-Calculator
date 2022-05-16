#ifndef VALIDATE_H
#define VALIDATE_H
#include <iostream>
#include <string>
using namespace std;

class Validate {
    public:

        /**
         * @brief Validate
         * @details Método constructor
         */
        Validate();

        /**
         *  @brief ~Validate
         *  @details Método destructor
         */
        ~Validate();

        /**
         * @brief validateAll
         * @details Invoca los demás métodos de validación
         * @param number
         * @param type
         * @return código de error
         */
        int validateAll(string number, string type);

        /**
         * @brief validateEntry
         * @details Valida que el usuario halla ingresado algo, cualquier caracter
         *          diferente de vacío
         * @param entry
         * @return código de error
         */
        int validateEntry(string entry);

        /**
         * @brief validateBinary
         * @details Valida que lo ingresado sea un número binario, es decir, que
         *          solo esté compuesto por unos y ceros
         * @param number
         * @return código de error
         */
        int validateBinary(string number);

        /**
         * @brief validateNumber
         * @details Valida que lo ingresado sea un número, es decir, que solo esté
         *          compuesto por números y no tenga letras u otros caracteres
         * @param number
         * @return código de error
         */
        int validateNumber(string number);
};

#endif // VALIDATE_H
