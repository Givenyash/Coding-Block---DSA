// 1  1  1  1  1  
// 1  2  3  4  1
// 1  3  6  3  1
// 1  4  3  2  1
// 1  1  1  1  1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=4;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||j==n|| i==1|| i==n){
                 cout<<"1 "<<" ";
            }
            else if(j==i&&i==3&&j==3){
                cout<<"6 "<<" ";
            }
            else if(i==3){
                cout<<i<<"  ";
            }
            else if(i==4){
                cout<<k<<"  ";
                k--;
            }
            else{
                cout<<j<<"  ";
            }
           
        }
        cout<<endl;
    }

    return 0;
}