#ifndef VALIDATE_H
#define VALIDATE_H
#include <iostream>
#include <string>
using namespace std;

class Validate {
    string* type;
    string* numbers;
    string operation;
    public:
        Validate();
        ~Validate();
        int push(string operation, string* numbers, string* type);
        int pull();
        int validateBinary(string number);
        int validateNumber(string number);
};

#endif // VALIDATE_H
