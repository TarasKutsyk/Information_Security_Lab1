#pragma once
#include <string>
#include <vector>
#include <algorithm>

const int offset = 9;

const int firstUpperLetterIndex = 192;
const int lastUpperLetterIndex = 223;
const int firstLowerLetterIndex = 224;
const int lastLowerLetterIndex = 255;

void encryptLine(std::wstring& line);
void encryptTextInVector(std::vector<std::wstring>& vector);
std::vector<wchar_t> getAlphabet();