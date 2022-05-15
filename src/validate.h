#ifndef VALIDATE_H
#define VALIDATE_H
#include <iostream>
#include <string.h>
using namespace std;

class Validate {
    public:
        Validate();
        ~Validate();
        int validateAll(string operation, string numbers[], string type[]);
        int validateBinary(string number);
        int validateDecimal(string number);
};

#endif // VALIDATE_H
