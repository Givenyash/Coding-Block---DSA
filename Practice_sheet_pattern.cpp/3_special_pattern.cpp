//       1   
//     1   1
//   2       2
// 3           3
//   2       2
//     1   1
//       1

#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=(m+1)/2;

    int k=1;//upper variable
    int l=2;//lower variable

    // upper outer loop
    for(int i=1;i<=n;i++){
        //outer spaces
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //for i=1
        if(i==1){
            cout<<"1 ";
        }
        //upper left pattern
        else{
            cout<<k<<" ";
        }

        //inner spaces
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";

        }if (i==1){
            cout<<"  ";
        }
        //right upper pattern
        else {
            cout<<k<<" ";
            k++; //updates k
        }

        cout<<endl;
    }

    //lower outer loop
     for(int i=n-1;i>=1;i--){
        //outer spaces
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //for i=1
        if(i==1){
            cout<<"1 ";
        }

        //lower left pattern
        else{
            cout<<l<<" ";
        }
        
        //inner spaces
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";
        }if (i==1){
            cout<<"  ";
        }

        //lower right pattern 
        else {
            cout<<l<<" ";
            l--; //decrementing

        }
        cout<<endl;
    }

    return 0;
}