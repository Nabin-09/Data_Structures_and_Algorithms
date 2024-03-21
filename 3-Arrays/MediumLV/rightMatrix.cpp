#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat){
	int n = mat.size();
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i = 0;i<n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
}
int main()
{
    int n;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid matrix size. Please enter a positive integer." << endl;
        return 1;
    }

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter the elements of the matrix (row by row):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Original matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(mat);

    cout << "Rotated matrix (90 degrees clockwise):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
