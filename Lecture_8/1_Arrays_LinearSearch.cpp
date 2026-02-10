//Linear Search using array
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n], key, found = 0;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
	}
        

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        //comparing each elements of array from the key
        if(arr[i] == key) {
            //Printing position of an array
            cout << "Element found at index " << i+1;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Element not found";

    return 0;
}