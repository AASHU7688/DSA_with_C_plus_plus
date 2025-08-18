// Move all the negative elements on left side and positive elements on right side with extra space in O(n)
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

    int result[n]; // extra space
    int index = 0;

    // First copy negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            result[index++] = arr[i];
        }
    }

    // Then copy positive (and zero if needed)
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            result[index++] = arr[i];
        }
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
