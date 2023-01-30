#include <Encryptor.hpp>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ps::Encryptor Enc;

    cout << "Enter a sentence that shorter than 30 words" << endl;
    std::string line;
    getline(cin, line);

    Enc.Encode(line);
}
