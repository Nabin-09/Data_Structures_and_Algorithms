#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int i, int n) {
    if (i >= n / 2) { // Base case: stop when i reaches the middle
        return;
    }
    swap(arr[i], arr[n - i - 1]); // Use std::swap for simplicity
    reverse(arr, i + 1, n);       // Increment i to progress recursion
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int &num : arr) {
        cin >> num;
    }

    reverse(arr, 0, n); // Pass the array and size directly
    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

