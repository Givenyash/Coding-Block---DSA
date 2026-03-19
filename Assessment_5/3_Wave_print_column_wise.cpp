#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=0; i<n; i++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int i= n-1; i>=0; i--){
                cout<<a[i][j]<<", ";
            }
        }
    }
    cout<<"END";
   return 0;
}

// input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44

// output
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END