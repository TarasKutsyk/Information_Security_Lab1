#include <iostream>
#include <fstream>
#include "windows.h";
#include "Decryption.h"

int main()
{
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);
    using namespace std;

    vector<wstring> inputVector;
    wstring inputString, result;
    wifstream inputStream;
    inputStream.open("../Debug/result.txt");

    while (!inputStream.eof())
    {
        getline(inputStream, inputString);
        inputVector.push_back(inputString);
    }
    inputStream.close();

    decryptTextInVector(inputVector);

    std::wofstream resultStream;
    resultStream.open("../Debug/decrypted.txt");
    for (auto& s : inputVector)
    {
        resultStream << s << '\n';
    }

    resultStream.close();
}
