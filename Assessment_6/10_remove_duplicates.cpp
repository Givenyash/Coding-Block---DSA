#include<iostream>
using namespace std;
string removeDuplicates(string s){
	string ans = "";

	ans = ans + s[0];
	int n= s.size();

	for(int i=1; i<n; i++){
		if( s[i] != s[i-1] ){
			ans = ans + s[i];
		}
	}
	return ans;
}

int main() {
	string s;
	cin>>s;

	cout<<removeDuplicates(s);
	return 0;
}
//input
//aabccba

//output
//abcda