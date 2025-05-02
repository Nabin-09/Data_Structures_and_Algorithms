//Level wise traversal
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g;
    int vis[n] = {0};
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : g[node]){
            if(!vis){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    //return bfs; //SC = O(3N)  TC = O
    return 0;
}