#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size();  

    // transpose
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
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
// 5
// 1 46 4 60 100 
// 28 52 97 80 59 
// 6 33 62 42 12 
// 57 31 56 89 47 
// 1 50 73 53 99 

// output
// 1 28 6 57 1 
// 46 52 33 31 50 
// 4 97 62 56 73 
// 60 80 42 89 53 
// 100 59 12 47 99 
