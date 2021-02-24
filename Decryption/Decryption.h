#pragma once
#include <string>
#include <vector>
#include <algorithm>

const int offset = 21;

void decryptLine(std::wstring& line);
void decryptTextInVector(std::vector<std::wstring>& vector);