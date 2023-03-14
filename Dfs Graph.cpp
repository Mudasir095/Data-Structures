//Depth FIRST SEARCH SIMULATION BY SAABU
#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void dfs(vector<int> adj[],vector<int>&ans,int node,int vis[]);
int main()
{
    
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    int vis[n]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int node;
    cin>>node;
    dfs(adj,ans,node,vis);
}
void dfs(vector<int> adj[],vector<int>&ans,int node,int vis[])
{
    cout<<node;
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(vis[it]!=1)
        {
            dfs(adj,ans,it,vis);
        }
    }
}