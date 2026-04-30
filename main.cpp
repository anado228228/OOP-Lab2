#include <iostream>
#include <windows.h>
#include "string_handler.h"

using namespace std;
void runAllTests(); 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");

    runAllTests(); 

    wcout << L"=== ПРОГРАМА ЗАПУЩЕНА ===" << endl;
    StringHandler h(L"привіт анна ");
    wcout << L"Текст: " << h.getText() << endl;
    wcout << L"Паліндром: " << h.findLongestPalindrome() << endl;

    system("pause");
    return 0;
}