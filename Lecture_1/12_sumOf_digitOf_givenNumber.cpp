#include<iostream>
using namespace std;
int main ()
{
    int n;
    int sum=0;
    int originalNumber;
    cin>>n;

    originalNumber = n;
    while(n != 0){
        int digit = n%10;
        sum = sum+digit;
        n /= 10;
    }
    cout<<"Sum of the Digit of :"<<originalNumber<<"is: "<<sum <<endl;

   return 0;
}