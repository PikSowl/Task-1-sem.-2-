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
        int len = 0;
        vector<string> coded;
        int choice = 0;
        bool ending = false;
        int num = 0;
        int counter = 0;
    public:
        Encryptor(){}
        ~Encryptor();

        void UserInteraction();
        void Gen_Fibonacci();
        void Encode(string &line);
        void Decode();
    };
}

