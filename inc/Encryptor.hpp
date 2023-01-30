#pragma once
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

namespace ps {
    class Encryptor {
    private:
        int Fibonacci[30];
        vector<string> coded;

    public:
        Encryptor(){}
        ~Encryptor();

        void Gen_Fibonacci();
        void Encode();
        void Decode();
    };
}

