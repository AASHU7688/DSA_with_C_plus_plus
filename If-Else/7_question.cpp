// Accept a year and check if it a leap year or not 
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the value of year: ";
    cin>>year;
    if((year%400==0) || (year%4==0 && year%100 != 0)){
        cout<<year <<" is the leap year";
    }
    else{
        cout<<year <<" is not the leap year";
    }
}