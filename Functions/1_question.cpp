// write a function to check wheather the number is prime or not
#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; // Not prime
        }
    }

    return true; // Prime (after all checks)
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (isprime(n)) {
        cout << "It is a prime number.";
    } else {
        cout << "It is not a prime number.";
    }

    return 0;
}
