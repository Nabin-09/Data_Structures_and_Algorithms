#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(auto &num : arr){
        cin >> num;
    }
    int result;
    cin >> result;   
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i==j) continue;
            if(arr[i] + arr[j] == result){
                cout<<i<<"  "<<j<<endl;
            }
        }
    }
    return 0;
}