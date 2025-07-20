// Print following payment
//    1
//   2 2
//  3   3
// 4444444

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++){
            if(i == 1 || i == n || j == 1 || j == 2 * i - 1){
                cout << i;
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}