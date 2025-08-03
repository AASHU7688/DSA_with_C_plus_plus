/******************************************************************************
Find the greatest element and print its index too.
      {2, 96, 69, 77, 145, 20} = Max element = 145 found at 4 index


*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int array[]={2, 96, 69, 77, 145, 20};
    int max=array[0];
    int size=sizeof(array);
    int length=size/sizeof(array[0]);
    int maxindex=0;
    int i=0;
    for(i=1;i<length;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    cout<<"Max element = "<<max<<" found at "<<maxindex<<" index"<<endl;
}