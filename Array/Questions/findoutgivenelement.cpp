// search the given element is present or not
#include<iostream>
using namespace std;
int main(){
  int array[]={5,4,9,3,8};
  int key=9;
  int ans=-1;
  int size=sizeof(array);
  int length=sizeof(array)/sizeof(array[0]);
  for(int i=0;i<length;i++){
      if(array[i]==key){
          ans=i;
          break;
      }
  }
  cout<<ans<<endl;
  
  return 0;
}