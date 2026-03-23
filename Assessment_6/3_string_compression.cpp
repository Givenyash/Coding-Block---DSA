#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n = s.size();

    for(int i =0; i<n; i++ ){
        int count=1;

        int j = i+1;
        while( j<n and s[j] == s[i] ){
            count++;
            j++;
        }
        cout<<s[i]<<count;

        i=j-1;
    }
    return 0;
}
//input
//aaabbccdsaa

//output
//a3b2c2d1s1a2
