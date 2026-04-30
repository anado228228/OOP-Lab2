#include <iostream>
#include <cassert>
#include "string_handler.h"

using namespace std;

void runAllTests() {
    wcout << L"=== ЗАПУСК ЮНІТ-ТЕСТІВ ===" << endl;
    StringHandler sh;

    sh.setText(L"racecar");
    assert(sh.findLongestPalindrome() == L"racecar");
    wcout << L"[OK] Тест 1 (racecar) пройдено." << endl;

    sh.setText(L"у нашому місті є ротатор");
    assert(sh.findLongestPalindrome() == L"ротатор");
    wcout << L"[OK] Тест 2 (ротатор) пройдено." << endl;

    wcout << L"УСІ ТЕСТИ ПРОЙДЕНО УСПІШНО!\n" << endl;
}