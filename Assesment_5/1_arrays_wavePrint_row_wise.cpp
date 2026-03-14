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
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int j= m-1; j>=0; j--){
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

//output
//11, 12, 13, 14, 24, 23, 22, 21, 31, 32, 33, 34, 44, 43, 42, 41, END