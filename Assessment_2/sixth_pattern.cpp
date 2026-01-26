//Pattern - Rhombus
//                 1
//         2       3       2
// 3       4       5       4       3
//         2       3       2
//                 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"\t";

        }
        // left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<"\t";
    
        }
         for(int j=2*i-2;j>=i;j--){
            cout<<j<<"\t";
        
        }
        cout<<endl;

    }
    for(int i=n-1;i>=1;i--){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"\t";

        }
        // left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<"\t";
    
        }
         for(int j=2*i-2;j>=i;j--){
            cout<<j<<"\t";
        
        }
        cout<<endl;

    }

    return 0;

}