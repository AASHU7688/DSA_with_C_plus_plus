/******************************************************************************

Check if array is sorted in increasing order or not.
Ex 1 - { 1, 5, 8,  9, 10, 15 } - OP = "YES"
Ex 2 - { 1, 8, 6, 9, 10, 15 } - OP = "NO"


*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int array[] = {1, 5, 8, 9, 10, 15};  // Change this array to test other inputs
    int n = sizeof(array) / sizeof(array[0]);

    bool isSorted = true;

    for(int i = 0; i < n - 1; i++){
        if(array[i] > array[i + 1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
