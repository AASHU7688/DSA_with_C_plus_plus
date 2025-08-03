// Accept size n from user and create a n size array then take n inputs into the and finally and Print the sum & Mean of all elements.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int sum = 0;
    double mean;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    mean = static_cast<double>(sum) / n;

    cout << "The sum is: " << sum << endl;
    cout << "The mean is: " << mean << endl;

    return 0;
}
