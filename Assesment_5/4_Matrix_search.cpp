#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n, m;
    cin>>n>>m;
	int count =0;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
	int target;
	cin>>target;

	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == target){
				count++;
			}
		}
	}

	if(count>0){
		cout<<1;
	}
	else{
		cout<<0;
	}

	return 0;
}

// input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62

// output
// 0