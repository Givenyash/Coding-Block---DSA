// *  *  *  *  *  
// *  #  #  #  *  
// *  #  @  #  *  
// *  #  #  #  *  
// *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //outer loop
    for(int i=1;i<=n;i++){

        //star printing logic
        for(int j=1;j<=n;j++){
            if(j==1||j==n|| i==1|| i==n){
                 cout<<"* "<<" ";
            }
            //@ print logic
            else if(j==i && i==3 && j==3){
                cout<<"@ "<<" ";
            }
            // # print logic
            else{
                cout<<"# "<<" ";
            }  
        }
        cout<<endl;

    }
    return 0;
}