#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10); // تأخذ الخانة الأخيرة
        n /= 10;         // تحذف الخانة الأخيرة
    }
    return sum;
}

int main() {
    // Test cases from the table
    cout << "digitSum(1234) = " << digitSum(1234) << endl;
    cout << "digitSum(1000) = " << digitSum(1000) << endl;
    cout << "digitSum(7) = " << digitSum(7) << endl;
    cout << "digitSum(0) = " << digitSum(0) << endl;

    return 0;
}