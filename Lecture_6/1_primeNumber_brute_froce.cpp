#include<iostream>
using namespace std;
int main ()
{
    int n; 
    cin>>n;
    bool ans = true;
    //hum pahle se assume kr rhe hai ki number prime hoga
    for(int i=2; i<=n-1; i++){
        if(n % i==0){
            ans=false;
        }
    }

    if(ans){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
   return 0;
}