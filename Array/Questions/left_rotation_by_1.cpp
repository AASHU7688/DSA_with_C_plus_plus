//Array left Rotation by 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Store the first element
    int first = arr[0];

    // Shift elements to the left
    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    // Place first element at the end
    arr[n - 1] = first;

    cout << "Array after left rotation by 1:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
