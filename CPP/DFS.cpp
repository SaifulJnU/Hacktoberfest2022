#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],int vis[],int node)
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        dfs(adj,vis,x);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n+1]={0};
    for(int i=0;i<n;i++)
    {
        if(vis[i]!=1)dfs(adj,vis,i);
    }

}