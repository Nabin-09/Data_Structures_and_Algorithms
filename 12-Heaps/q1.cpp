/* Find kth smallest element  suppose ip = [7 , 10 , 4 , 3 , 20 , 15]
and k = 3 , so find 3rd smallest element like here for 3 it would be 7*/

// sorting is an approach but it takes O(NLogN)
#include<bits/stdc++.h>

using namespace std;


class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        int n = arr.size();
        // code here
         priority_queue<int> pq;
        for(int i = 0 ; i < k ; i++){
        pq.push(arr[i]);
        }
        for(int i = k  ; i < n ; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
            }
        }
    return pq.top();
    }
};