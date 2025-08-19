// Move all the negative elements on left side and positive elements on right side without extra space in O(n).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;

    while (left <= right) {
        if (arr[left] < 0 && arr[right] < 0) {
            // Both negative → move left pointer
            left++;
        }
        else if (arr[left] > 0 && arr[right] < 0) {
            // Left positive, right negative → swap
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] > 0) {
            // Both positive → move right pointer
            right--;
        }
        else {
            // Left negative, right positive → already correct
            left++;
            right--;
        }
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
