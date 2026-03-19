#include<iostream>
#include<vector>
using namespace std;

bool canpaint(vector<int> & boards, int k, long long mid){
	int p = 1;
	int t = 0;

	for(int i = 0; i<boards.size(); i++){
		if(t + boards[i] <= mid){
			t = t + boards[i];
		}
		else{
			p++;
			t = boards[i];
		}
	}
	return p<=k;
}

int main() {
	int k,n;
	cin>>k>>n;
	long long maxy = 0;
	long long sum = 0; 

	 vector<int> boards(n);

	 for(int i=0; i<n; i++){
		 cin>>boards[i];
	 }
	 for(int i=0; i<n; i++){
		 sum = sum+boards[i];
		 maxy = max(maxy , (long long)boards[i] );
	 }

	 long long low = maxy;
	 long long high = sum;
	 int ans = 0;

	 while(low<=high){
		 long long mid = low + (high - low)/2;
		 if(canpaint (boards , k, mid)){
			 ans = mid;
			 high = mid -1;
		 }
		 else{
			 low = mid + 1;
		 }
	 }
	 cout<<ans<<endl;
	return 0;
}
//input
// 2
// 2
// 1 10

//output
//10