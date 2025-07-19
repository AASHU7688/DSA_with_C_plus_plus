// Print a pattern of regular triangle right angle triangle
//*
//**
//***
//****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entre the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}