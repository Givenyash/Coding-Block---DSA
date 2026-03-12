#include<iostream>
using namespace std;
int main ()
{
    int c;
    cin>> c;

    // Method 1
    // user input
    char arr[c];
    for(int i=0; i<c; i++){
        cin>>arr[i];
    }
    // traversing
    for(int i=0; i<c;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Method 2
    // normal character array
    char a[]={'q','w','e','r'};// size of character array

    int n= sizeof(a)/sizeof(char);

    //traversing
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

   return 0;
}