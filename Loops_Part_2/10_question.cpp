//- Accept a number and check if it is a strong number or not (Sum of factorial of each digit)
//  Ex- 145 = 1! + 4! + 5! = 145


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int original = n;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        int fact = 1;

        for(int i = 1; i <= digit; i++){
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original){
        cout << original << " is a strong number" << endl;
    }
    else{
        cout << original << " is not a strong number" << endl; 
    }

    return 0;
}
