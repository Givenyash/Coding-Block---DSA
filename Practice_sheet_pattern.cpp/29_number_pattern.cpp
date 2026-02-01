//         1 
//       2 0 2 
//     3 0 0 0 3
//   4 0 0 0 0 0 4
// 5 0 0 0 0 0 0 0 5

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        //outer spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        cout<<i <<" ";
        //inner space
        for(int j=1; j<=2*i-3;j++){
            cout<<"0"<<" ";
        }
        if(i==1){
            cout<<"  ";
        }
        else{
            cout<<i<<" ";
        }
        cout<<endl;
    } 

   return 0;
}