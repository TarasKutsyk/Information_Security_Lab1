#include <iostream>
#include <fstream>
#include "windows.h";

#include "Lab1.h"

int main()
{
    /*SetConsoleOutputCP(1251);
    SetConsoleCP(1251);*/
    using namespace std;
    //auto alphabet = getAlphabet();
    //for (auto s : alphabet)
    //{
    //    wcout << s << '\n';
    //}
    vector<wstring> inputVector;
    wstring inputString, result;
    wifstream inputStream;
    inputStream.open("input.txt");

    while (!inputStream.eof())
    {
        getline(inputStream, inputString);
        inputVector.push_back(inputString);
    }
    inputStream.close();

    encryptTextInVector(inputVector);

    std::wofstream resultStream;
    resultStream.open("../Debug/result.txt");
    for (auto& s : inputVector)
    {
        resultStream << s << '\n';
    }

    resultStream.close();
}
