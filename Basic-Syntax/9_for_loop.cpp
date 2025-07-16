// print numbers from 1 to 50 except multiples of 3
#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}