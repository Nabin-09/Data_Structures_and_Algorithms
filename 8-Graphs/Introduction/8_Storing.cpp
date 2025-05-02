#include <bits/stdc++.h>
using namespace std;

//Taking input , we need n nodes and m edges , in next m lines we will have m edges , they dont follow an order
//We can store using matrix(adjacency matrix) or a list of list


int main() {
    //learn about directed , undirected graph , path , degress , indgrees and outdegrees
    //Learn about how to handle edge weights as well

    int n , m ;
    cin >> n >> m;
    int adj[n+1][m+1];
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
        //This takes o(n^2) space

    }
    return 0;
}