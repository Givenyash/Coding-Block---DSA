//Fabinacci Pattern
// 0
// 1 1
// 2 3 5
// 8 13 21 34

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=0, y=1;

    for (int i= 1; i<=n; i++){
        for(int j=1;j<=i;j++){
        cout << x <<" ";
        int c = x+y;
        x = y;
        y = c;
    }
    cout<<endl;
}

    return 0;
}