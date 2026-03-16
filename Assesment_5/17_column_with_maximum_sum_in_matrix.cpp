#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main () {

	int n;
	cin>>n;

	int maxSum = INT_MIN;

	vector<vector<int>> nums (n,vector<int> (n) );
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>nums[i][j];
		}
	}

	int left=0;
	int right= n-1;
	int top = 0;
	int bottom = n-1;
	int count=0;

	while(left<=right and top<=bottom){

		int sum = 0;

		for(int i=top; i<=bottom; i++){
			sum = sum + nums[i][left];
		}
		left++;
		
		if(sum > maxSum){
			maxSum = sum;
			count = left;
		}
	}
	cout<<count<<" "<<maxSum<<endl;
	return 0;
}

// input
// 7
// 90 40 1 3 39 59 90 
// 48 72 67 32 73 19 27 
// 22 37 47 68 1 5 55 
// 81 5 39 53 38 86 21 
// 1 32 7 44 2 65 47 
// 68 13 24 28 69 81 43 
// 16 34 67 3 82 26 35 

// output
// 6 341