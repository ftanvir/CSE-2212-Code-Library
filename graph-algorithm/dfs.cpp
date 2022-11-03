#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
vector<int> g[N];
bool vis[N];
stack<int>st;

void dfs(int u) {

    //printig the dfs traversal
    // cout<<u<<" ";
    vis[u] =true;
    for(auto i:g[u]) {
        if(!vis[i]) {
            dfs(i);
        }
    }
     
}


int main()
{
    int n, e;
    cin>>n>>e; //input number of nodes and edges

    //adjacency list representation of graph
    //input of an undirected graph
    while(e--) {
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u); 
    }


    int source;
    cin>>source;  //source to start the dfs traversal
    dfs(source);
    
}