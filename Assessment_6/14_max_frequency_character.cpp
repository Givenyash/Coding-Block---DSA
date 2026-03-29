#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n = s.size();
	int maxCount=0;
	char ans;

    for(int i =0; i<n; i++ ){
        int count=0;

        for( int j=0; j<n; j++ ){
            if(s[j] == s[i]){
				count++;
			}
        }

        if(count>maxCount){
			maxCount = count;
			ans = s[i];
		}
    }
	cout<<ans;
    return 0;
}
//input
//aaabacB

//output
//a