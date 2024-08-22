#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2 == 0){
        cout<<-1<<endl;
    }
    else{
        vector<int> p(n);
        int l = 0 , r = n-1;
        for(int i = 1 ; i<=n ; i++){
            if(i %2 == 1){
                p[l++] = i;
            }
            else{
                p[r--] = i;
            }
        }
        for(int i = 0 ; i < n ; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	// your code goes here
	cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
