//         1 
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

//column asymmetric
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";

        }
        // left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";
    
        }
         for(int j=2*i-2;j>=i;j--){
            cout<<j<<" ";
        
        }
        cout<<endl;

    }
    return 0;

}