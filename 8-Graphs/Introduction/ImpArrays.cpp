/*Implementation of Graphs using 2D array*/
#include <iostream>
using namespace std;

int main() {
    /*n dtermines the number of edges , mark the intersection of nodes as 1 and rest as 0[v]
    and m determines the number of edges in our graph */
    int n , m ;
    cin >> n >> m;
    int adj[n+1][m+1];
    for(int i = 0 ; i < m ; i++){
        int u , v ; //This will store the values of the edges are between which vertex;
        adj[u][v] = 1;
        adj[v][u] = 1;//Undirected so mark it 1 , as if edge goes from 1 to 2 , it should be visible for 2 to 1 too.
    }
    return 0;
}