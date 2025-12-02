#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);     
    freopen("output.txt", "w", stdout); 
    int t;
    cin >> t;
    while(t--){
        int n;
        int count = 0;
        cin >> n;
        vector<int> arr(n);  
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        unordered_map<int, int> mpp;
        for(int& num : arr){
            mpp[num]++;
        }
        
        for(auto& p : mpp){
            if(p.second < p.first) count += p.second;
            else if(p.second > p.first) count += (p.second - p.first);
        }
        cout << count << endl;
    }
    return 0;
}
