#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    int result = 1;
    int count = 0;
    while (count < y) {
        result *= x;
        count++;
    }
    cout << "Result: " << result;
    return 0;
}