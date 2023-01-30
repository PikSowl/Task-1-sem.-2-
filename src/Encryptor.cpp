#include <Encryptor.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <string.h>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

namespace ps
{
    void Encryptor::Encode(string &line){
        string delim = " ";
        short pos = 0;
        int base_str_size = line.size();
        string temp;
        while (pos < base_str_size) {
            temp = temp.assign(line, pos, line.find(delim, pos) - pos);
            coded.push_back(temp);
            pos += temp.size() + 1;
        }
        len = coded.size();
        Gen_Fibonacci();
        UserInteraction();
    }

    void Encryptor::Gen_Fibonacci(){
        if (len > 0) Fibonacci[0] = 1;
        if (len > 1) Fibonacci[1] = 2;
        for (int i = 2; i < len; i++) Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    void  Encryptor::UserInteraction(){
        while(!ending){
            cout << "Type in number to chose according action" << endl << "1) Type in word's codes to write sentence (Decode)" << endl << "2) Receive original key's number" << endl << "3) Close program" << endl;

            cin >> choice;
            switch (choice) {
                case 1:
                    Decode();
                    break;
                case 2:
                    cout << "Original key: ";
                    for (int i = 0; i < len; i++) cout << Fibonacci[i] << " ";
                    cout << endl;
                    break;
                case 3:
                    ending = true;
                    break;
                default:
                    break;
            }
        }
    }

    void Encryptor::Decode(){
        cout << "Write numbers, type 0 to return to menu" << endl << " ";
        while(cin >> num){
            counter = 0;
            if(num == 0) break;
            if (num > Fibonacci[len-1]) num = -1;
            while (num > Fibonacci[counter]) ++counter;
            if (Fibonacci[counter] == num) cout << coded[counter] << " ";
            else cout << "wrong_input ";
        }
    }

    Encryptor::~Encryptor() = default;
}