//Pirnt all the Divisors
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    /*Dont run the loop till n , run it till sqrt(n) and get the other divisors too*/
    vector<int> ans;
    int n ;
    cin >> n;
    for(int i = 1 ; i < sqrt(n) ; i++){
        if(n%i == 0) ans.push_back(i);
        if(n%i != i) ans.push_back(n/i);
    }
    sort(ans.begin(),ans.end()); // Not necessary
    for(int i = 0 ; i < ans.size(); i++) cout<<ans[i]<<"  ";
    return 0;
}
