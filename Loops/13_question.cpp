//Sum of digits of a number, 936 = 18
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while(n > 0) {
        int digit = n % 10;   // Extract last digit
        sum = sum + digit;    // Add it to sum
        n = n / 10;           // Remove last digit
    }

    cout << "Sum of digits is: " << sum << endl;
    return 0;
}
