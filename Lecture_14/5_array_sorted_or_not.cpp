#include<iostream>
using namespace std;

bool isSorted(int a[], int n){
    if(n == 0 or n == 1){
        return true;
    }
    if(isSorted(a, n-1) and a[n-1] > a[n-2]){
        return true;
    }
    return false;
}

int main ()
{
    int a[] = {1,2,3,4,0};
    cout<< boolalpha << isSorted(a,5);
   return 0;
}