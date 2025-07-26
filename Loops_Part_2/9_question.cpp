// print the hcf of a given number
#include<iostream>
using namespace std;

int main() {
    int a, b, hcf;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int minNum = (a < b) ? a : b;

    for(int i = 1; i <= minNum; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    cout << "HCF is: " << hcf;
    return 0;
}
