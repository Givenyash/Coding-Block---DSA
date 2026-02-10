#include<iostream>
#include<vector> // built-in header file
using namespace std;
int main ()
{
    //initialization
    vector<int>a;
    //add
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    //delete
    a.pop_back();// remove last element from vector

    cout<<"Capacity of the vector"<<a.capacity()<<endl;
    cout<<"Size of the vector"<<a.size()<<endl;

    //first element
    cout<<a.front()<<endl;

    //last element
    cout<<a.back()<<endl;

    for(int i=0; i<a.size();i++){ //a.size is built-in function by using vector header file
        cout<<a[i]<<" ";
    }
    
   return 0;
}