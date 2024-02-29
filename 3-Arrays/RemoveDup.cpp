#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void TakeInput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << "th element of array: ";
        cin >> arr[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n]; 

    TakeInput(arr, n);

    return 0;
}
