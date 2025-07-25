// write a code to convert decimal into binary
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int answer=0;
    int power=1;
    while(n>0){
        int paritydigit = n%2;
        answer=answer+(paritydigit*power);
        power=power*10;
        n=n/2;
    }
    cout<<answer<<endl;
    
    return 0;
}