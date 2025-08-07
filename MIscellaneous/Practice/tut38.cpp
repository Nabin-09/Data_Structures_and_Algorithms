#include <iostream>
#include <vector>
using namespace std;

int maxPairs(vector<int>& arr1, vector<int>& arr2) {
    int N = arr1.size(), M = arr2.size();
    vector<bool> used1(N, false), used2(M, false);
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!used1[i] && !used2[j] && 2 * arr1[i] <= arr2[j]) {
                used1[i] = true;
                used2[j] = true;
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> arr1 = {3, 2, 1};
    vector<int> arr2 = {3, 4, 2, 1};
    cout << "Max pairs = " << maxPairs(arr1, arr2) << endl;  // Output: 2
}
