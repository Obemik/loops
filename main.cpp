#include <iostream>
using namespace std;

int main() {
    int num1, num2 = 1, sum = 1;
    cout << "Enter num: ";
    cin >> num1;
    while (num2 <= 10) {
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        num2++;
    }
    return 0;
}