#include <iostream>
using namespace std;

int main() {
    int num1, sum = 0;
    cout << "Enter num: ";
    cin >> num1;
    int current = num1;
    while (current <= 500) {
        sum += current;
        current++;
    }
    cout << "Sum: " << sum;
    return 0;
}