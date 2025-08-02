// calculate the sum of all elements in the given array
#include<iostream>
using namespace std;
int main(){
  int array[]={5,4,9,3,8};
  int sum=0;
  int size=sizeof(array);
  int length=sizeof(array)/sizeof(array[0]);
  for(int i=0; i<length;i++){
      sum=sum+array[i];
  }
  cout<<sum<<endl;
  return 0;
}
