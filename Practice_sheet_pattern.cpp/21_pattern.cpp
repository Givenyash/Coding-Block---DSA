// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
// * * * * * * * * *

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        //right part
        //star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // left part
        //space
        for(int j= 1; j<=n-i-1; j++){
            cout<<"  ";
        }
        //star
        if(i==n){
            for(int j= 1; j<= n-1; j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        }

        cout<<endl;
    }

   return 0;
}