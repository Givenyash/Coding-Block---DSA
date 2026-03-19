#include<iostream>
using namespace std;

//adding the digit
int digitsum(int n){
    int sum= 0;
    while(n!=0){
        int k= n% 10;
        sum+=k;
        n= n/10;
    }
    return sum;
}

//main function
int main ()
{
    int n;
    cin >> n;
    int sum=0;
    int factor = 0;
    sum = digitsum(n);
    
    //
    for(int i=2; i<=n; i++){
        while(n % i ==0){
                factor+=digitsum(i);
            n=n/i;
        }
    }

    if(sum==factor){
        cout<<1<<endl;
    }

    else{
        cout<<0;
    }

   return 0;
}