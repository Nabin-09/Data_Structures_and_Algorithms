/*Depth - First- Traversal of graph*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
                 1
               /  \
               2   3--4
              / \  |  |
             5  6  7--8 
             In the above graph we will be
    performing the depth wise traversal:
    1   2  5 (depth complete) , now lets go right
    1   2  5  6 (no depth) , go to 2 (no depth) , go to 1 (no depth)
    now lets go to 3 and right
    1   2  5  6  3  7 
    then go right to 8  and then 4 
    1  2  5  6  3  7  8  4
    If the starting node is 3 , then :
     3  4  8  7 (we can have many more configurations too)
        */
    int n ; //No of nodes
    cin >> n;
    vector<int> adj[n+1];
    for(int i = 0 ; i < n; i++){
        int u , v ;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n+1] = {0};
    
    return 0;
}