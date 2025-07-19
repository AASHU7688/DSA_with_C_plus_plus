// Print a pattern with 3 rows and 6 columns i.e rectangular pattern
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows: ";
    cin>>n;
    cout<<"enter the number of columns: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
