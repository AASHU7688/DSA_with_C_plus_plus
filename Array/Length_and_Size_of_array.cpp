// Finding size of array and its length
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int size;
    int length;
    size=sizeof(array);
    cout<<"the size of array is: "<<size<<endl;
    length=(sizeof(array)/sizeof(array[0]));
    cout<<"the length of the array is: "<<length<<endl;
}