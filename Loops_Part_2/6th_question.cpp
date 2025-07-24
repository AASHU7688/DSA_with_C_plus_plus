// check weather the number is  armstrong or not
#include<iostream>
#include<cmath> 
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    int temp = n;

    int digits = 0;
    int t = n; 
    while (t != 0) {
        digits++;
        t = t / 10;
    }

    while (n != 0) {
        int rem = n % 10;
        sum = sum + pow(rem, digits);  
        n = n / 10;
    }

    if (temp == sum) {
        cout << "It is an Armstrong number";
    }
    else {
        cout << "It is not an Armstrong number";
    }

    return 0;
}
