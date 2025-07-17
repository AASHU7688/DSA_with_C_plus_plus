// Accept two numbers and print the greatest between them
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the value of a: "<<endl;
    cout<<"enter the value of b: "<<endl;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"a is greatest"<<endl;
    }
    else{
        cout<<"b is greatest"<<endl;
    }
}