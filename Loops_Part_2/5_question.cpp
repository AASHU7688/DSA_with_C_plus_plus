// find the lcm of two numbers
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;
    for (int lcm = max; lcm <= a * b; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
            break;
        }
    }

    return 0;
}
