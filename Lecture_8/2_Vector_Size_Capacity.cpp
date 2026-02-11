#include<iostream>
#include<vector> // built-in header file
#include<algorithm> //
using namespace std;
int main ()
{
    //initialization
    vector<int>a;
    //add
    a.push_back(5);
    a.push_back(3);
    a.push_back(9);
    a.push_back(1);
    a.push_back(91);
    a.push_back(32);

    //delete
    a.pop_back();// remove last element from vector

    //first element
    cout<<a.front()<<endl;

    //last element
    cout<<a.back()<<endl;

    //insert a value in vector at any index from start
    //a.begin() +index , value (which you want to enter)
    a.insert(a.begin()+2,15);

    //insert a value in vector at any index from end
    //a.end() - index , value (which you want to enter)
    a.insert(a.end()-1,20);

    cout<<"Capacity of the vector = "<<a.capacity()<<endl;
    cout<<"Size of the vector = "<<a.size()<<endl;
    
    cout<<"Vector elements"<<" ";
    for(int i=0; i<a.size();i++){ //a.size is built-in function by using vector header file
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //Reversal of vector
    reverse(a.begin(),a.end());

    cout<<"Reversal Elements"<<" ";
    for(int i=0; i<a.size();i++){ 
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //sorting the vector
    sort(a.begin(), a.end());

    cout<<"Sorted Elements"<<" ";
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

   return 0;
}