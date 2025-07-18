// Check if the number is Prime or not.
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number";
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        cout << n << " is a prime number";
    } else {
        cout << n << " is not a prime number";
    }

    return 0;
}
