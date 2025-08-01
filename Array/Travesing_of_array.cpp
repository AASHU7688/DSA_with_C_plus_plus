// Travesing of array
#include<iostream>
using namespace std;
int main(){
    int array[ ]={1,2,3,4,5};
    int size;
    int length;
    size=sizeof(array);
    length=(sizeof(array)/sizeof(array[0]));
    
    cout<<"using for loop"<<endl;
    for(int i=1;i<=length;i++){
        cout<<i<<endl;
    }
    
    cout<<"using foreach loop"<<endl;
    for(int ele:array){
        cout<<ele<<endl;
    }
    
    cout<<"using while loop"<<endl;
    int index=0;
    while(index<length){
        cout<<array[index]<<endl;
        index++;
    }
}