// Array left rotation by K elements
#include<iostream>
using namespace std;

int main(){
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter value of k (number of left rotations): ";
    cin >> k;

    // Handle cases where k >= n
    k = k % n;

    // Create temporary array to store result
    int rotated[n];

    // Copy elements from index k to end
    int index = 0;
    for(int i = k; i < n; i++){
        rotated[index++] = arr[i];
    }

    // Copy first k elements to the end
    for(int i = 0; i < k; i++){
        rotated[index++] = arr[i];
    }

    // Print the rotated array
    cout << "Array after left rotation by " << k << ":\n";
    for(int i = 0; i < n; i++){
        cout << rotated[i] << " ";
    }

    cout << endl;
    return 0;
}
