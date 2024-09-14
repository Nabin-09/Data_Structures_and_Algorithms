#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
void RowPascalsTriangle(int n){
    ll ans = 1;
    cout<<ans<<" ";
    for(int i = 1 ; i < n ; i++){
        ans = ans * (n-i);
        ans = ans / (i);
        cout<<ans<<" ";
    }
}
void PascalTraingle(int n){
    int spaces = n;
    for(int j = 0 ; j < n ; j++){
    for(int i = 0 ; i < spaces ; i++){
        cout<<" ";
    }
    RowPascalsTriangle(j+1);
    for(int i = 0 ; i < spaces ; i++){
        cout<<" ";
    }
    cout<<endl;
    spaces--;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    cin.tie(NULL);
    int n ;
    cin >> n;
    PascalTraingle(n);
    return 0;
}
