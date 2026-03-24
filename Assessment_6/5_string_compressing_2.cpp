#include <iostream>
using namespace std;

void compress(string s){
    int n = s.size();

    for(int i=0; i<n; i++){
        int count = 1;

        int j = i+1;
        while(j<n && s[j] == s[i]){
            count++;
            j++;
        }
        if(count == 1){
            cout<<s[i];
        }
        else{
            cout<<s[i]<<count;
        }
        i = j-1;
    }
}

int main(){
    string s;
    cin>>s;

    compress(s); 
	
    return 0;
}
//input
//aaabbccds

//output
//a3b2c2ds