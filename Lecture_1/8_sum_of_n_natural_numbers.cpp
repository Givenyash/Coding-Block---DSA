#include<iostream>
using namespace std;
int main ()
{
    int num,i,sum=0;
    cout<<"Enter your number : "<<endl;
    cin>>num;

    for (i=1; i<=num; i++){
        cout<<"The number are : "<<i<<endl;
        sum = i + sum;
    } 
    cout<<"Sum of numbers is : "<<sum <<endl;
   return 0;
}