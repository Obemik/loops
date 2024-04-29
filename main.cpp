#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int num1, num2;
    cout << "Enter first num: ";
    cin >> num1;
    cout << "Enter second num: ";
    cin >> num2;
    if (num1 > num2) {
        int low = num1;
        num1 = num2;
        num2 = low;
    }
    int current = num1;
    SetConsoleTextAttribute(hConsole, 9);
    cout << "Even numbers: ";
    while (current <= num2) {
        if (current % 2 == 0) {
            cout << current << ", ";
        }
        current++;
    }
    cout << endl;
    current = num1;
    SetConsoleTextAttribute(hConsole, 10);
    cout << "Odd numbers: ";
    while (current <= num2) {
        if (current % 2 != 0) {
            cout << current << ", ";
        }
        current++;
    }
    cout << endl;
    current = num1;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "Multiples of 7: ";
    while (current <= num2) {
        if (current % 7 == 0) {
            cout << current << ", ";
        }
        current++;
    }
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}