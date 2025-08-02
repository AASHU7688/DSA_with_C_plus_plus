// taking input from user in array 
#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    int size=sizeof(vowels);
    int length=(sizeof(vowels)/sizeof(vowels[0]));
    cout<<"using for loop";
    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" "<<endl;
    }
    
    cout<<"using for eachloop";
    for(char &ele:vowels){
        cin>>ele;
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" "<<endl;
    }
}