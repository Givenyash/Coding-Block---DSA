#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
	int n,m;
	cin>>n>>m;

	vector<vector<int>> arr (n, vector<int> (m) );
	for(int i =0; i<n; i++){
		for(int j =0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	// row-wise sorting
    for(int i = 0; i < n; i++){
        sort( arr[i].begin(), arr[i].end() );
    }

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// input
// 4 5
// 13 5 13 9 11 
// 5 10 11 4 6 
// 6 10 17 12 16 
// 8 11 7 18 5 

// output
// 5 9 11 13 13 
// 4 5 6 10 11 
// 6 10 12 16 17 
// 5 7 8 11 18 
