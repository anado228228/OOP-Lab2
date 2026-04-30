#pragma once
#include <string>

class StringHandler {
private:
    std::wstring text;

public:
    StringHandler();
    StringHandler(const std::wstring& text);

    void setText(const std::wstring& text);
    std::wstring getText() const;

    std::wstring findLongestPalindrome();
};