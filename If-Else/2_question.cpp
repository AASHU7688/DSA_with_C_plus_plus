// Accept the gender from the user as char and print the respective greeting message Ex - Good Morning Sir (on the basis of gender)
#include<iostream>
using namespace std;
int main(){
    char gender;
    cout<<"enter your gender: ";
    cin>>gender;
    if(gender == 'm' || gender=='M'){
        cout<<"good morning sir"<<endl;
    }
    else if (gender=='f' || gender=='f'){
        cout<<"good morning maam"<<endl;
    }
    else{
        cout<<"wrong input"<<endl;
    }
}