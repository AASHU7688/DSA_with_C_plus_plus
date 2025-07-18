// Print the sum of all even & odd numbers in a range seperately
#include<iostream>
using namespace std;
int main(){
    int start;
    cout<<"start from where: ";
    cin>>start;
    int end;
    cout<<"end: ";
    cin>>end;
    int evensum=0;
    int oddsum=0;
    for(int i=start;i<=end;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
    cout<<"sum of even numbers: "<<evensum<<endl;
    cout<<"sum of odd numbers: "<<oddsum<<endl;
    return 0;
}