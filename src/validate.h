#ifndef VALIDATE_H
#define VALIDATE_H
#include <iostream>
#include <string>
using namespace std;

class Validate {
    public:
        Validate();
        ~Validate();
        int validateAll(string number, string type);
        int validateEntry(string entry);
        int validateBinary(string number);
        int validateNumber(string number);
};

#endif // VALIDATE_H
