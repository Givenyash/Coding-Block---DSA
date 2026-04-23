#include <iostream>
using namespace std;

int sum(int n){
if(n == 0){
return 0;
}

return n + sum(n - 1);  // recursive function
}

int main(){
int n = 10;
cout<<"Sum from 1 to "<<n<<" is: "<<sum(n);

return 0;
}