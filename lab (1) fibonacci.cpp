#include <iostream>
using namespace std;

long long fibRecursive(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
    // يمكنك تجربة أي قيمة هنا مثل 10 أو 30 أو 45
    long long n = 10;
    cout << "Fibonacci(" << n << ") = " << fibRecursive(n) << endl;
    return 0;
}