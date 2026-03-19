#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size(); 
    int m = matrix[0].size(); 

    // transpose
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse each row
    for(int i = 0; i < n; i++){
        int left = 0, right = n - 1;
        while(left < right){
            swap(matrix[left][i], matrix[right][i]);
            left++;
            right--;
        }
    }
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    // print rotated matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 
