#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to add: ";
    cin >> n;

    int sum = 0;
    int num;

    do {
        cout << "Enter number: ";
        cin >> num;
        sum += num;
        n--;
    } while (n > 0);

    cout << "Total sum is: " << sum << endl;
    return 0;
}
