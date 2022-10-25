#include<bits/stdc++.h>
using namespace std;

void addEdge(int u,int v,vector<int> adj[])
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool dfsHelper(int node, vector<int> adj[],vector<bool> &vis1,vector<int> &parent1)
{
    for(auto it:adj[node]){
        if(vis1[it])
        {
            if(parent1[it]!=node && it!=parent1[node]){
                return true;
            }
        }
        else if(!vis1[it]){
            vis1[it] = true;
            parent1[it] = node;
            if(dfsHelper(it,adj,vis1,parent1)){
                return true;
            }
        }
    }
    return false;
}





int main() {
    int E,V;
    cout<<"Enter the number of vertices and edges: ";
    cin>>V>>E;
    vector<int> adj[V];
    cout<<"Enter the edges:\n";
    for(int i=1;i<=E;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v,adj);
    } 
    cout<<"\nAdjacency List of Graph: \n";  
    for(int i=0;i<V;i++){
        cout<<i<<" : ";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    vector<bool> vis1(V,false);
    vector<int> parent1(V,-1);
    for(int i=0;i<V;i++){
        if(!vis1[i])
        {
            parent1[i] = i;
            vis1[i] = true;
            if(dfsHelper(i,adj,vis1,parent1))
            {
                cout<<"Yes, the cycle is present\n";
                return 0;

            }
        }
    }
    
    cout<<"Cycle is not present\n";
return 0;
}

