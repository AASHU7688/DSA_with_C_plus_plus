// Accept an english alphabet from user and check if it is a consonent or a vowel
#include<iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter an alphabet: ";
    cin >> alpha;

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' ||
       alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U') {
        cout << alpha << " is a vowel";
    } else {
        cout << alpha << " is a consonant";
    }

    return 0;
}

