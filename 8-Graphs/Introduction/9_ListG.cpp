#include <bits/stdc++.h>
using namespace std;
    int main(){

   //Takes O(2*E) space
    int n , m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //in case of weighted graphs in adjacency matrix we enter weights instead of 1 and store pairs in lists
    //vector<vector<pair<int, int>>> g;
    return 0;
}