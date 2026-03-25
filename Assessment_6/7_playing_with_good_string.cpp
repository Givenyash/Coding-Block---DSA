#include<iostream>
using namespace std;
int main() {

	string s;
	cin>>s;

	int n = s.size();
	int count=0;
	int maxCount=0;

	for(int i=0; i<n; i++){
		if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
			count++;
		}
		else{
			count=0;
		}
		if(count>maxCount){
			maxCount=count;
		}
	}
	cout<<maxCount;
	return 0;
}
//input
//cbaeicde

//output
//3