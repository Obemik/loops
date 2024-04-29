#include <iostream>
using namespace std;

int main() {
    int n = 1000;
    int a = 1;
    int l = 1000;
    int sum = ((n * (a + l)) / 2) / n;
    cout << "Result: " << sum;
    return 0;
}