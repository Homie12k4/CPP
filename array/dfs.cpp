#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, vector<int>>graph, int n,vector<int>&visited){
    cout<<node<<" ";
    visited[node]=1;
    for(auto nbr:graph[node]){
        if(!visited[nbr]){
            dfs(nbr,graph,n,visited);
        }
    }
}

int main()
{
    vector<vector<int>>edgelist ={
        {0,1},{1,4}, {1,2}, {1,3},{2,5}
    };
    int n=5;
    unordered_map<int, vector<int>>graph(n);
    for(int i=0;i<edgelist.size();i++){
        int u= edgelist[i][0];
        int v = edgelist[i][1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>visited(n);
    dfs(0,graph,n,visited);

    
}