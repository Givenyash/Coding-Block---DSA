//row Asymmetric
// *	*	*	*	*	
// *	*		*	*	
// *				*	
// *	*		*	*	
// *	*	*	*	*


#include<iostream>
using namespace std;
int main ()
{
    int m ,i;

    cin>>m;
	int n=(m+1)/2;

    for(int i=1; i<=n; i++){
        //star
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<"\t";
        }
        //spaces
        for(int j=1; j<=2*i-3; j++){
            cout<<"\t";
        }
        if(i==1){
            for(int j=1; j<=n-i; j++){
                cout<<"*"<<"\t";
            }
        }
        else{
            for(int j=1; j<=n-i+1; j++){
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }
     for(int i=n-1; i>=1; i--){
        //star
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<"\t";
        }
        //spaces
        for(int j=1; j<=2*i-3; j++){
            cout<<"\t";
        }
        if(i==1){
            for(int j=1; j<=n-i; j++){
                cout<<"*"<<"\t";
            }
        }
        else{
            for(int j=1; j<=n-i+1; j++){
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }
    
   return 0;
}