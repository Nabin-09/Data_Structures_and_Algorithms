//Print all the divisors of a number
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    //Extreme naive approach
    vector<int> ans;
    int n ;
    cin >> n;
    for(int i = 1  ; i <= n ; i++){
        if(n % i == 0) ans.push_back(i);
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<"  ";
    }
    return 0;
}
