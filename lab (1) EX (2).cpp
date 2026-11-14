// Lab 1 - Factorial, recursive and iterative
#include <iostream>
using namespace std;

// 1. Recursive function using long long to handle larger numbers
long long factorialRec(int n) {
    if (n == 0) return 1;           // base case
    return n * factorialRec(n - 1); // recursive case
}

// 2. Iterative function using long long

long long factorialIter(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    // Task 1 & 2: Test from n = 0 up to 22 (after switching to long long)
    for (int n = 0; n <= 22; n++) {
        cout << n << "! = " << factorialRec(n);
        // Uncomment the line below for Task 3 to compare side by side:
        // cout << "  loop: " << factorialIter(n);
        cout << endl;
    }

    // Task 4: Test a large n with the recursive version (Stack Overflow test)
    /*
    int big;
    cout << "Enter a large n: ";
    cin >> big;
    // cout << "iterative finished: " << factorialIter(big) << endl;
    cout << "recursive finished: " << factorialRec(big) << endl;
    */

    return 0;
}