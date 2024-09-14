#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long 
using namespace std;
ll NcR(int n , int r ){
    ll res = 1 ;
    for(int i = 0 ; i < r ; i++){
        res  = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin.tie(NULL);
    int queries ;
    cin >> queries;
    while(queries--){
    int n , r ;
    cin >> n >> r ;
    cout<<NcR(n, r)<<endl;
    }
    return 0;
}
