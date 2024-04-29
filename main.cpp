#include <iostream>
using namespace std;

int main() {
    int x, i = 0;
    cout << "Enter number: ";
    cin >> x;
    while (i <= x) {
        cout << i << ", ";
        i++;
    }
    return 0;
}
