#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t>0){
		long long n,k;
		cin>>n>>k;
		long long x = INT_MIN;

		if(k==1){
			cout<<n<<endl;
			t--;
			continue;
		}

		for(long long i=1; pow(i,k) <= n ; i++){
			if(x<i){
				x=i;
			}
		}
		t--;
		cout<<x<<endl;
	}
	return 0;
}

//input
// 2
// 10000 1
// 1000000000000000 10

//output
// 10000
// 31