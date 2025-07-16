#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "enter the value of c: ";
    cin >> c;
    
    switch (c){
    case 'a':
    cout<<"it is vowel"<<endl;
    break;
    case 'e':
    cout<<"it is vowel"<<endl;
    break;
    case 'i':
    cout<<"it is vowel"<<endl;
    break;
    case 'o':
    cout<<"it is vowel"<<endl;
    break;
    case 'u':
    cout<<"it is vowel"<<endl;
    break;
    default:
    cout<<"it is consonant"<<endl;
    }
}