// Print a pattern with 3 rows and 6 columns i.e rectangular pattern with blank in the center or hollow
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows: ";
    cin>>n;
    cout<<"enter the number of columns: ";
    cin>>m;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
        cout<<endl;
        }
        return 0;
}