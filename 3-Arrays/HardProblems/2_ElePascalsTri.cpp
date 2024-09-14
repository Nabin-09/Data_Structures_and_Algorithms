#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
ll NcR(int n , int r){
    ll res = 1 ;
    for(int i = 0 ; i < r ; i++){
        res = res * (n - i);
        res = res / (i+1);
    }
    return res;
}
int elementOfPascalTr(int r , int c){
    return NcR(r-1,c-1);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin.tie(NULL);
    int queries;
    cin >> queries;
    while(queries--){
        int r , c;
        cin >> r >> c;
        cout<<elementOfPascalTr(r,c)<<endl;
    }
    return 0;
}
