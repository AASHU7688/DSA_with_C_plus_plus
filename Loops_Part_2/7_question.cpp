// write a code to convert binary into decimal
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int answer=0;
    int power=1;
    while(n>0){
        int lastdigit = n%10;
        answer=answer+(lastdigit*power);
        power=power*2;
        n=n/10;
    }
    cout<<answer<<endl;
    
    return 0;
}