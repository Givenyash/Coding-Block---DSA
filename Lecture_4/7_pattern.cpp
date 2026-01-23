// 5 4 3 2 * 
// 5 4 3 * 1
// 5 4 * 2 1
// 5 * 3 2 1
// * 4 3 2 1

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(i==j){
            //star
            cout<<"* ";
        }
        else{
            //number
            cout<<j<<" ";
        }
    }
         cout<<endl;
    }
   return 0;
}