#include <iostream>
#include <utility> // For std::pair
#include <algorithm> // For std::max and std::min

using namespace std;

pair<int, int> DaCmm(int arr[], int size, int i, int j) {
    int maxi, mini;
    if (i == j) {
        return {arr[i], arr[i]}; // Base case: single element
    }
    if (i == j - 1) { // Two elements
        if (arr[i] > arr[j]) {
            return {arr[i], arr[j]}; // Return max and min
        } else {
            return {arr[j], arr[i]}; // Return max and min
        }
    } else {
        int mid = (i + j) / 2; // Midpoint calculation
        pair<int, int> left = DaCmm(arr, size, i, mid); // Left half
        pair<int, int> right = DaCmm(arr, size, mid + 1, j); // Right half
        
        // Combine results
        int maxi1 = left.first; // Max from left
        int mini1 = left.second; // Min from left
        int maxi2 = right.first; // Max from right
        int mini2 = right.second; // Min from right
        
        return {max(maxi1, maxi2), min(mini1, mini2)}; // Overall max and min
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: "; // Prompt for array size
    cin >> size;
    int arr[size]; // Declare the array
    
    cout << "Enter the elements of the array:\n"; // Prompt for elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Input array elements
    }
    
    cout << "Inputs received!\n";

    int i = 0, j = size - 1; // Initialize indices
    pair<int, int> result = DaCmm(arr, size, i, j); // Call the function once
    
    // Output max and min values
    cout << "Maximum: " << result.first << ", Minimum: " << result.second << endl;

    return 0;
}
