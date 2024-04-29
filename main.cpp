#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum = 0;
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
    do {
        sum = sum + current;
        current++;
    } while (current <= num2);
    cout << "Sum: " << sum;
    return 0;
}