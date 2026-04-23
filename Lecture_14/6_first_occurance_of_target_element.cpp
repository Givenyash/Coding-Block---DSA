#include<iostream>
using namespace std;

int first_Occurrence(int arr[], int n, int target, int i){
 if(i == n){  //Base case
 return -1;
 }

 if(arr[i] == target){  // target checking
 return i;
 }

 return first_Occurrence(arr, n, target, i + 1);  //Recursive call
}

int main (){
    int arr[] = {1,3,5,8,5,9};
    int target = 5;

    cout<< first_Occurrence(arr, 6 , target, 0);
   return 0;
}