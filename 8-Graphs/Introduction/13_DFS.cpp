#include<bits/stdc++.h>

using namespace std;

void buildGraph(int n , int m , vector<vector<int>> &adj){
    for(int i =0 ; i< n , i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

int main (){

    int n , m ;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);

    buildGraph(n , m , adj);
    

}