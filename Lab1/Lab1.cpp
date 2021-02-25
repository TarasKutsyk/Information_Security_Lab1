#include "Lab1.h"

void encryptLine(std::wstring& line)
{
    for (int i = 0; i < line.length(); i++)
    {
        line[i] += offset;
    }
}

void encryptTextInVector(std::vector<std::wstring>& vector)
{
    std::for_each(vector.begin(), vector.end(), encryptLine);
}

std::vector<wchar_t> getAlphabet()
{
    std::vector<wchar_t> arr;

    for (int i = firstUpperLetterIndex; i <= lastLowerLetterIndex; i++)
    {
        arr.push_back((wchar_t)i);
    }

    return arr;
}