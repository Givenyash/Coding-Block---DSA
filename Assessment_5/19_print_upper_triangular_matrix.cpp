#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>> nums(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> nums[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j= 0; j<n; j++){ 
			if(i>j){
				cout<<0<<" ";
			}
			else{
				cout<<nums[i][j]<<" ";
			}
        }
		cout<<endl;
    }
    return 0;
}
//input
// 3
// 1 2 3
// 4 5 6
// 7 8 9

//output
// 1 2 3
// 0 5 6
// 0 0 9