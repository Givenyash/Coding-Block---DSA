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
    bool isLowerTriangular = true;

    for(int i=0; i<n; i++){
        for(int j= i + 1; j<n; j++){ 
            if(nums[i][j] != 0){
                isLowerTriangular = false;
                break;
            }
        }
    }

    if(isLowerTriangular == true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
    return 0;
}

// input
// 4
// 374 0 0 0 
// 761 60 0 0 
// 578 531 878 0 
// 75 10 197 198 

// output
// true