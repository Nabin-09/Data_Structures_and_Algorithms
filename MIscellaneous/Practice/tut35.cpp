#include <bits/stdc++.h>
using namespace std;
vector<int> factorial(int n){
    vector<int> fact;
    fact.push_back(1);
    int carry = 0;
    for(int i = 2 ; i <=n ; i++){
        for(int j = 0; j < fact.size(); j++){
            int product = fact[j]*i;
            product+=carry;
            carry = product/10;
            fact[j] = product%10;
        }
        if(carry){
            while(carry){
                fact.push_back(carry%10);
                carry /= 10;
            }
        }
    }
    reverse(fact.begin() , fact.end());
    return fact;
}
int main() {
    int n ;
    cin >> n;
    vector<int> ans = factorial(n);
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}