// Linear Search an array - If element found print the index else -1
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int index = -1; // default if not found
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i; // store index where found
            break;     // stop after finding first occurrence
        }
    }

    cout << index << endl;

    return 0;
}
