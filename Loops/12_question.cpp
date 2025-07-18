#include<iostream>
using namespace std;

int main(){
    int n, number, digit, reversed = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    number = n;  // Save the original number

    for(; n > 0; n = n / 10){
        digit = n % 10;
        reversed = reversed * 10 + digit;
    }

    if(reversed == number){
        cout << "It is a palindromic number";
    }
    else{
        cout << "It is not a palindromic number";
    }

    return 0;
}
