#include <iostream>
using namespace std;

pair<int, int> DaCmm(int arr[], int i, int j) { 
    if (i == j) {
        return {arr[i], arr[i]}; // Base case: when there's only one element
    } else if (i == j - 1) { // Two elements
        if (arr[i] > arr[j]) {
            return {arr[i], arr[j]}; // Return max and min
        } else {
            return {arr[j], arr[i]}; // Return max and min
        }
    } else {
        int mid = (i + j) / 2; // Calculate the middle index
        pair<int, int> left = DaCmm(arr, i, mid); // Max and min from the left half
        pair<int, int> right = DaCmm(arr, mid + 1, j); // Max and min from the right half
        
        int max1 = left.first; // Max from left
        int min1 = left.second; // Min from left
        int max2 = right.first; // Max from right
        int min2 = right.second; // Min from right

        // Combine the results
        return {max(max1, max2), min(min1, min2)}; // Return the overall max and min
    }
}

int main() {
    int size = 10;
    int arr[10] = {1, 4, 6, 54, 56, 13, 34, 21, 89, 90};
    
    pair<int, int> result = DaCmm(arr, 0, size - 1); // Call the function
    cout << "Max: " << result.first << ", Min: " << result.second << endl; // Print results

    return 0;
}
