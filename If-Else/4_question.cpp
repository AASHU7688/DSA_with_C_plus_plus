// - Accept name and age from the user. Check if the user is a valid voter or not. Valid - Hello Shery, You are a valid voter. Invalid - Sorry Shery, you can't vote. Part 2 - Print after how many years the user will be eligible

#include<iostream>
using namespace std;
int main(){
    int age;
    string name;
    int difference;
    cout<<"enter what is your age: ";
    cin>>age;
    cout<<"enter what is your name: ";
    cin>>name;
    if(age>=18){
        cout<<"Hello "<<name<<" you can vote";
    }
    else{
        difference=18-age;
        cout<<"Sorry "<<name<<" you can't vote"<<endl;
        cout<<"you can vote after "<<difference<<" years";
    }
}