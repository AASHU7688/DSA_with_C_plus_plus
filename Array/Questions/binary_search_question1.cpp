//Binary Search. If element found print the index else -1
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // avoids overflow

        if (arr[mid] == key) {
            index = mid; // found
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }

    cout << index << endl;

    return 0;
}
