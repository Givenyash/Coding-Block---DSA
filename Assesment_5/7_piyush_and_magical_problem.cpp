#include<iostream>
#include<vector>
using namespace std;

int main() {
	 int n, m, K, S;
    cin>>n>>m>>K>>S;

    vector<vector<char>>a(n,vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
	
	int top = 0;
	int bottom = n-1;
	int left = 0;
	int right = m-1;

		while( top <= bottom ){

			if(S<K){
				cout<<"No"<<endl;
				return 0;
			}

			// top to bottom
			for(int j=left; j<=right; j++){
				if(a[top][j] == '.' ){
					S = S - 2;
					if(j != right){
						S--;
					}
				}
				else if(a[top][j] == '*' ){
					S = S + 5;
					if(j != right){
						S--;
					}
				}
				else if( a[top][j] == '#' ){
					break ; 
				}	
			}
			top++;
		}

	if(S>=K){
		cout<<"Yes"<<endl;
		cout<<S<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}

// input
// 4 4 5 20
// . . * .
// . # . .
// * * . .
// . # * *

// output
// Yes
// 13