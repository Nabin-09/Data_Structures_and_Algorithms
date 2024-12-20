#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate sum
int sum(int i, int sumi) {
    if (i < 1) return sumi; // Base case: when i < 1, return the accumulated sum
     sum(i - 1, sumi + i); // Recursive case: accumulate the sum and decrement i
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Sum of first " << n << " numbers is: " << sum(n, 0) << endl;
    return 0;
}
