#include <iostream>
using namespace std;

int main() {
    int num1, sum = 1;
    cout << "Enter num: ";
    cin >> num1;
    int current = num1;
    while (current <= 20) {
        sum *= current;
        current++;
    }
    cout << "Dobytok: " << sum;
    return 0;
}