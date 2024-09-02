#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    bool flag = true;
    int i = 2;
    while(i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            flag = false;
            break;
        }
        i = i + 1;
    }
    if(flag) cout<<"Prime"<<endl;
    }
    return 0;
}
