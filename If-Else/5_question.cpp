// Accept a day number between 1-7 and print the corresponding dayname.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter your number: ";
    cin>>number;
    switch(number){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout << "Wrong input! Please enter a number between 1 and 7.";
    }
    return 0;
}



