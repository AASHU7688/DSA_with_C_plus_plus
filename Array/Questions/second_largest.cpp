/******************************************************************************
Find the second greatest element
      {2, 96, 69, 77, 145, 20} = Second greatest element = 96



*******************************************************************************/

#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int main() {
    int array[] = {2, 96, 69, 77, 145, 20};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second greatest element found." << endl;
    } else {
        cout << "Second greatest element = " << secondLargest << endl;
    }

    return 0;
}
