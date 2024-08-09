
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	// your code goes here
	cin.tie(NULL);
	int t;
    cin>>t;
	while(t--){
	    int m, a , b , c ;
	    cin >> a >> b >> c>>m;
	    if(a == b || b == c || a == c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        int mini = 10;
	        mini = min(abs(a-b) , abs(a-c));
	        mini = min(mini, abs(b-c));
	        if(mini<=m) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}

}
