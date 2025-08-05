/******************************************************************************
Take n integer inputs from user and store them in an array.
Now, copy all the elements in an another array but in reverse order and print it.


*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], reversed[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Copy in reverse order
    for(int i = 0; i < n; i++){
        reversed[i] = arr[n - 1 - i];
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++){
        cout << reversed[i] << " ";
    }

    cout << endl;

    return 0;
}
