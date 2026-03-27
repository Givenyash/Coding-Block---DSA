#include<iostream>
using namespace std;

string toggle(string s){
	int n = s.size();

	for(int i=0; i<n; i++){
		if( islower(s[i]) ){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}
	return s;
}

int main() {
	string s;
	cin>>s;

	cout<<toggle(s);
	return 0;
}
//input
//abC

//output
//ABc