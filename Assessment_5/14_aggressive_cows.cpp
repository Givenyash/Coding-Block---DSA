#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canPlace(vector<int> &stalls, int c, int mid){
    int cow = 1;
    int lastPos =stalls[0];

    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){
            cow++;
            lastPos=stalls[i];
        }
    }
    return cow >= c;
}

int main(){
    int n,c;
    cin>>n>>c;

    vector<int> stalls(n);
    for(int i = 0; i<n; i++){
        cin>>stalls[i];
    }

    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(canPlace(stalls, c, mid)){
            ans = mid;       // possible → try bigger distance
            low = mid + 1;
        }
        else{
            high = mid - 1;  // not possible → reduce distance
        }
    }

    cout<<ans<<endl;
    return 0;
}
//input
// 5 3
// 1 2 9 4 8

//output
//3