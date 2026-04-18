#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int countBlocks(vector<int>&nums){
    int n = nums.size();
    
    if(n == 0){
        return 0;
    } 
    
    vector<int>suffix(n);
    
    int blocks = 0;
    int maxValue = INT_MIN;
    int minValue = 0;
    
    suffix[n-1] = nums[n-1];
    
    for(int i=n-2; i>=0; i--){
        suffix[i] = min(suffix[i+1], nums[i]);
    }
    
    for(int i=0; i<n-1; i++){
        maxValue = max(maxValue , nums[i]);
        minValue = suffix[i+1];
        
        if(maxValue <= minValue){
            blocks++;
        }
    }
    return blocks+1;
}

int main(){
    int n;
    cin>>n;
    
    vector<int>nums(n);
    
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    cout<<countBlocks(nums);
}
