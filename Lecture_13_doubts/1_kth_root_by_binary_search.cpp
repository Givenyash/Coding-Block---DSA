#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t>0){
		long long n;
		cin>>n;
		int k;
		cin>>k;

		int ans =0;
		int low = 1;
		long long high = n;

		while(low<=high){
			// calculate mid
			int mid = low + (high - low)/2;

			if( pow(mid,k) <= n ){ // if value is under the range

				ans = mid;
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
		t--;
		cout<<ans<<endl;
	}
	return 0;
}