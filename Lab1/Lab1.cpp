#include "Lab1.h"

void encryptLine(std::wstring& line)
{
    for (int i = 0; i < line.length(); i++)
    {
        line[i] -= offset;
    }
}

void encryptTextInVector(std::vector<std::wstring>& vector)
{
    std::for_each(vector.begin(), vector.end(), encryptLine);
}