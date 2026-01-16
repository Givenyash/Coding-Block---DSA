#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

   if(1500>=n && n>=1100){
    cout<<"Cycle"<<endl;
   }
    else if(460>=n && n>=300){
        cout<<"MacBook"<<endl;
    }
    else if(280>=n && n>=200){
        cout<<"Kurkure"<<endl;
    }
    else if(80>=n && n>50){
        cout<<"Bike"<<endl;
    }
    else{
        cout<<"Better luck next time.";
    }
   return 0;
}