// print the sum of first n natural numbers using while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int sum=0;
    
    int i=1;// loop variable
    while(i<=n){//condition
        sum=sum+i;
        i++;//updating loop variable
    }
    cout<<sum<<endl;
    return 0;
}