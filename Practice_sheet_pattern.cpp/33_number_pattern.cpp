//                   0 
//                 9 0 9 
//               8 9 0 9 8 
//             7 8 9 0 9 8 7 
//           6 7 8 9 0 9 8 7 6 
//         5 6 7 8 9 0 9 8 7 6 5 
//       4 5 6 7 8 9 0 9 8 7 6 5 4 
//     3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 
//   2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 
// 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            if(j!=i){
                cout<<j<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

   return 0;
}