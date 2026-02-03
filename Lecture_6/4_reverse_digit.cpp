#include<iostream>
using namespace std;

int main(){
	
	int i;
	int num;
	
	cout<<"Enter your input";
	cin>>num;
	
	for( i=1; i<=num; i++){
		cout<<i;
	}cout<<endl;
	for(i=num; i>=1; i--){
		cout<<i;
	}
	
	return 0;
}