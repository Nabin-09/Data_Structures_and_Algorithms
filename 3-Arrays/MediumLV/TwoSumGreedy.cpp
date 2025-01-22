#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int &num : arr){
        cin >> num;
    }
    int res;
    cin >> res;
    sort(arr.begin() , arr.end());
    int left = 0 , right = n-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == res){
            cout<<left<<" "<<right<<endl;
            left++;
            right--;
        }
        else if(sum < res) left++;
        else right--;
    }
    return 0;
}