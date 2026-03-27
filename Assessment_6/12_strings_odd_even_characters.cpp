#include<iostream>
using namespace std;

string convertedString(string s){
	string nums = "";
	int n = s.size();

	for(int i=0; i<n; i++){
		char value = s[i];

		if(i % 2 == 0){
			value = value + 1;
		}
		else{
			value = value - 1;
		}
		nums= nums + value;
	}
	return nums;
} 

int main() {
	string s;
	cin>>s;

	cout<<convertedString(s);
	return 0;
}
//input
//abcg

//output
//badf