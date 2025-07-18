//program to separate and print each digit of a number in reverse order
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(;n>0;n=n/10){
        int digit;
        digit=n%10;
        cout<<digit;
    }
    return 0;
}