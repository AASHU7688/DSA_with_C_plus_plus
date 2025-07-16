// print the sum of first n natural numbers using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int sum=0;
    
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum;
}