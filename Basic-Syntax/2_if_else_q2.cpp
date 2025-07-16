//categorise age into adult, teenager, and child
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of age: ";
    cin>>a;
    if(a<12){
        cout<<"child";
    }
    else if(a>=12 && a<18){
        cout<<"teenager";
    }
    else{
        cout<<"adult";
    }
}
