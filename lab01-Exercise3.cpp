#include <iostream>
using namespace std;

// Function prototype
int sumTo(int n);

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    // Check if n is below 1
    if (n < 1) {
        cout << "Invalid input! n must be 1 or greater." << endl;
    }
    else {
        int result = sumTo(n);
        cout << "Sum = " << result << endl;
    }

    return 0;
}

// Function definition
int sumTo(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}