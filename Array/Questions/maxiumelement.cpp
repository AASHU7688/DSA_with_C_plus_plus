// find the maximum value out of all the elements in the array
#include<iostream>
using namespace std;
int main(){
  int array[]={5,4,9,3,8};
  int max=array[0];
  int size=sizeof(array);
  int length=sizeof(array)/sizeof(array[0]);
  for(int i=0; i<length;i++){
      if(array[i]>max){
          max=array[i];
      }
  }
  cout<<"the maximum element is: "<<max<<endl;
  return 0;
}