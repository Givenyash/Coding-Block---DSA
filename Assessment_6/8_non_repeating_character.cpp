#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;

	while(t>0){
		string s;
		cin>>s;

		int frequency[26] = {0};
		int n = s.size();

		for(int i=0; i<n; i++){
			frequency[ s[i] - 'a' ]++;
		}
		string ans="";
		for(int i=0; i<n; i++){
			if(frequency[ s[i] - 'a' ] == 1){
				ans = s[i];
				break;
			}
		}
		if(ans.empty() ){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
		}

		t--;
	}
	return 0;
}
//input
// 4
// codingblocks
// abbac
// java
// ccdd

//output
// d
// c
// j
// -1