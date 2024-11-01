/*In this program we will learn to store weighted graphs in a 2D array*/
#include <iostream>
using namespace std;

int main() {
    /*Every this is same , the only difference is we will be marking the spot with Weight of edge and not 1*/
    int n , m;
    cin >> n >> m;
    int adj[n+1][n+1]; 
    for(int i = 0 ; i < m ; i++){
        int u , v , weight;
        cin >> u >> v >> weight;
        adj[u][v] = weight;
        adj[v][u] = weight;
    }
    /*Very simple Implementation*/    
    return 0;
}