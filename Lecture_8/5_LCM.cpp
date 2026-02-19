#include<iostream>
#include<algorithm> //in-built function
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;

    int gcd =__gcd(a,b); // a*b = LCM * HFC 
    int lcm = a*b/gcd; // LCM = a*b/HFC and HCF=GCD (by same definition)
    cout<<lcm<<endl; // hence LCM=a*b/GCD , prints Lcm

return 0;
}