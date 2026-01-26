//Pattern - Mountain
// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        for(int j=1; j<=(n-i)*2-1;j++){
            cout<<"\t";
        }

         for(j=i;j>=1;j--){
            if(j!=n){
            cout<<j<<"\t";
            }
        }
       cout<<endl;
    }
    return 0;
}