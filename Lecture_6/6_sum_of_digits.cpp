#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int rev=0;

    //while loop
    while(n!=0){
        int k=n%10;
        rev=rev+k;
        n=n/10;
    }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl; //in-built function which is present in #include<iostream>

    return 0;
}