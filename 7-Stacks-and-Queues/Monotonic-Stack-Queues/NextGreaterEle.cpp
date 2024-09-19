#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to find the Next Greatest Element for each element in the array
vector<int> NextGreatestElement(vector<int>& arr, int n) {
    vector<int> nge(n, -1); 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j]; 
                break;
            }
        }
    }
    
    return nge;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<int> result = NextGreatestElement(arr, n);
    
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}
