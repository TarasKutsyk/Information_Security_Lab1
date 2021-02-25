#include "Decryption.h";

void decryptLine(std::wstring& line)
{
    for (int i = 0; i < line.length(); i++)
    {
        line[i] -= offset;
    }
}

void decryptTextInVector(std::vector<std::wstring>& vector)
{
    std::for_each(vector.begin(), vector.end(), decryptLine);
}