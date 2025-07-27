//program to separate and print each digit of a number in reverse order
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x";
    cin>>x;
    long long rev=0;
    
    while(x!=0){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
        
        
    }
    cout<<"Reversed number: "<<rev<<endl;
    return 0;
}
