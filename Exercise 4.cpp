#include <iostream>
using namespace std;

int sumBetween(int a, int b) {
    if (a > b) {
        return 0;
    }
    int total = 0;
    for (int i = a; i <= b; i++) {
        total += i;
    }
    return total;
}

int main() {
    // Test cases from the table: sumBetween(3, 7), sumBetween(5, 5), sumBetween(7, 3)
    cout << "sumBetween(3, 7) = " << sumBetween(3, 7) << endl;
    cout << "sumBetween(5, 5) = " << sumBetween(5, 5) << endl;
    cout << "sumBetween(7, 3) = " << sumBetween(7, 3) << endl;

    return 0;
}