//Write a function to reverse a number.
#include <iostream>
#include <cmath> // for abs()
using namespace std;

// Function to reverse a number
long long reverseNumber(int n) {
    int original = n;
    long long reverse = 0;
    int digit;

    n = abs(n);  // Work with positive value

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original < 0) reverse *= -1; // Reapply negative sign if needed

    return reverse;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long long reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed;

    return 0;
}
