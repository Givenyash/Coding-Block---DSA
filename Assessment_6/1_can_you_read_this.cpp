// isupper method
#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    for(int i = 0; i<s.length(); i++) {
        if (isupper(s[i]) and i != 0) {
            cout<<endl;
        }
        cout<<s[i];
    }
    return 0;
}
//input
//IAmACompetitiveProgrammer

//output
// I
// Am
// A
// Competitive
// Programmer