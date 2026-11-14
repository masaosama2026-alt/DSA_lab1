#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += (i * i);
    }
    return total;
}

int sumOfEven(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            total += i;
        }
    }
    return total;
}

int sumOfOdd(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            total += i;
        }
    }
    return total;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of Squares = " << sumOfSquares(n) << endl;
    cout << "Sum of Even = " << sumOfEven(n) << endl;
    cout << "Sum of Odd = " << sumOfOdd(n) << endl;

    return 0;
}