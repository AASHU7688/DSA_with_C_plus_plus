//Print the sum of all factors of a number, 50 -> 1 + 2 + 5 + 10 + 25 = 43
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    cout<<"the sum of factors is: "<<sum;
}