#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int &num : arr){
        cin >> num;
    }
    int target;
    cin >> target;
    map<int, int> mpp;
    for(int i = 0 ; i < n ; i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            cout<<i<<" "<<mpp[more]<<endl;
        }
        mpp[a] = i;
    }
    return 0;
}