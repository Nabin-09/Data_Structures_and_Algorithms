/*This Program will show the implementation of Graph using our Adjacency List*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*We will create a Vector of array
    for every index of vector store the neighbours and hence we will know the edges
    https://youtu.be/3oI-34aPMWM?feature=shared 09:32
    SC = 2 * O(2E)(for undirected graph) and O(E)(for directed graphs).
     Much better than previous method as we had many empty spaces there
    */
    int n , m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); //Comment this if this is an directed graph as we can go only from u to v
    }
    return 0;
}