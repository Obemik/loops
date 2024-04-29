#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    do {
        cout << "Enter num: ";
        cin >> num;
        sum += num;
    } while (num != 0);
    cout << "Sum: " << sum;
    return 0;
}