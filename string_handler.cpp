#include "string_handler.h"
#include <cwctype>
#include <stdexcept>

using namespace std;

StringHandler::StringHandler() : text(L"") {}
StringHandler::StringHandler(const wstring& t) : text(t) {}

void StringHandler::setText(const wstring& t) { this->text = t; }
wstring StringHandler::getText() const { return text; }

wstring expand(const wstring& s, int left, int right) {
    while (left >= 0 && right < s.length() && towlower(s[left]) == towlower(s[right])) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

wstring StringHandler::findLongestPalindrome() {
    if (text.empty()) throw invalid_argument("Помилка: Рядок порожній!");

    wstring longest = L"";
    for (int i = 0; i < text.length(); i++) {
        wstring p1 = expand(text, i, i);
        if (p1.length() > longest.length()) longest = p1;

        wstring p2 = expand(text, i, i + 1);
        if (p2.length() > longest.length()) longest = p2;
    }
    return longest;
}