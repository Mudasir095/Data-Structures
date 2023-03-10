//Graph traversal BFS SIMULATION BY SAABU
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(auto it:adj[i])
    //     {
    //         cout<<it<<" ";
    //     }
    // }
    int vis[n]={0};
    vis[0]=1;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
        
    }
    
}