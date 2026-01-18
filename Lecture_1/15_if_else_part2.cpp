#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

     if(460>=n && n>=300){
        cout<<"You won a MacBook!"<<endl;
        if(n>=300 && n<=380){
            cout<<"Model:M1 Mac"<<endl;
        }
    }
   else if(n>=381 && n<=460){
            cout<<"Model:M2 Mac"<<endl;
        }

    else if(280>=n && n>=200){
        cout<<"You won a pack of Kurkure!"<<endl;
        if(n>=200 && n<=240){
            cout<<"Flavor: Chilli Kurkure"<<endl;
        }
        if(n>=241 && n<=280){
            cout<<"Flavor: Onion Kurkure"<<endl;
        }
    }

    else if(1500>=n && n>=1100){
    cout<<"You won a Cycle!"<<endl;
    if(n>=1100 && n<=1300){
        cout<<"Brand: Avon Cycle"<<endl;
    }
    if(n>=1301 && n<=1500){
        cout<<"Brand: Hero Cycle"<<endl;
    }
    }

    else if(80>=n && n>50){
        cout<<"You won a Bike!"<<endl;
        if(n>50 && n<=65){
            cout<<"Model:Bullet";
        }
        if(n>65 && n<=80){
            cout<<"Model: Rajdoot"<<endl;
        }
    }
    else{
        cout<<"Better luck next time.";
    }
   return 0;
}