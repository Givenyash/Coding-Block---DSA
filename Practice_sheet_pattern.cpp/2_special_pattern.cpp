// 1 0 1 0 1 
//   1 0 1
//     1
//   1 0 1
// 1 0 1 0 1

#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=(m+1)/2;

    //upper
    for(int i=n;i>=2;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=2*i-1;j>=1;j--){
        if(j%2!=0){
            cout<<"1 ";
        }else{
            cout<<"0 ";
        }
    }
    cout<<endl;
    }

    //lower
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=2*i-1;j>=1;j--){

        if(j%2!=0){
            cout<<"1 ";
        }else{
            cout<<"0 ";
        }
    }
    cout<<endl;
    }
return 0;
}