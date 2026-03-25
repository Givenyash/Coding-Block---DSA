#include<iostream>
using namespace std;
int main() {

	string s;
	cin>>s;

	int n = s.size();

	for(int i=0; i<n; i++){
		cout<<s[i];
		if(i<n-1){
			int difference = s[i+1] - s[i];
			cout<<difference;
		}
	}
	return 0;
}
//