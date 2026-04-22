#include <iostream>
using namespace std;

int printDescending(int n){

    if(n < 0){
        return 0;
    }

    cout<<n;
    if(n > 0){
        cout <<" ";
    }

    return printDescending(n - 1);
}

int main() {
    int n = 5;
    printDescending(n);
    return 0;
}