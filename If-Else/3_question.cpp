// Accept an integer and check whether it is an even number or odd.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}