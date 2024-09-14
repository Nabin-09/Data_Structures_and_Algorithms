#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
ll NcR(int n , int r){
    ll res = 1 ;
    for(int i = 0 ; i < r ; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
void RowPascalsTriangle(int n ){
    ll ans = 1;
    cout<<ans<<" ";
    for(int i = 1 ; i < n ; i++){
        ans = ans * (n-i);
        ans = ans / (i);
        cout<<ans<<" ";
    }

}
int main()
{
    #ifndef ONLINE_JUDDE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    cin.tie(NULL);
    int queries;
    cin >> queries;
    while(queries--){
    int n ;
    cin >> n;
    RowPascalsTriangle(n);
    }
    return 0;
}
