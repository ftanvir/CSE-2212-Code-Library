#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>g[N]; //adjacency list representation of graph
bool vis[N]; 


void bfs(int s) {
    queue<int>q;
    q.push(s);
    vis[s] = 1;

    //printing the bfs traversal
    // cout<<s<<" ";

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto i:g[u]) {
            if(!vis[i]) {
                vis[i] = 1;
                q.push(i);

                //printing the bfs traversal
                cout<<i<<" ";
            }
        }
    }
}

int main()
{
    int n, e; 
    cin>>n>>e;  //input number of nodes and edges

    //adjacency list representation of graph.
    //input for an undirected graph
    while (e--)
    {
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    //source to start the bfs traversal
    int source;
    cin>>source;
    bfs(source);
    
}