/*In C++, an array is a fundamental data structure used to store multiple values of the same data type in a contiguous memory location. This means you can group similar data together under one name and access each element individually using its index.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int arr[10e7]; max size is 10^7 globally
 
#include <iostream>

using namespace std;

// Function to take input from the user and store it in the array
void getUserInput(int arr[], int size) {
   for (int i = 0; i < size; ++i) {
       cout << "Enter element " << i + 1 << ": ";
       cin >> arr[i];
   }
}

// Function to find the largest element in the array
int findLargest(int arr[], int size) {
   int largest = arr[0];  // Initialize largest with the first element

   for (int i = 1; i < size; ++i) {
       if (arr[i] > largest) {
           largest = arr[i];
       }
   }

   return largest;
}

int main() {
   int size;
   cout << "Enter the number of elements: ";
   cin >> size;

   int arr[size];  // Declare the array with the specified size

   getUserInput(arr, size);  // Call function to take input

   int largestElement = findLargest(arr, size);  // Find the largest element

   cout << "The largest element in the array is: " << largestElement << endl;

   return 0;
}
