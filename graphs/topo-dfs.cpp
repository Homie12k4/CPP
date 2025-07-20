#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<int>& visited,vector<vector<int>>& graph,deque<int>&dq,vector<int>& curr){
    visited[node]=1;
    curr[node]=1;
    for(auto nbr:graph[node]){
        if(!visited[nbr]){
            if(!dfs(nbr,visited,graph,dq,curr)) return false;
        }
        else{
            if(curr[nbr]==1) return false;
        }
    }
    curr[node]=0;
    dq.push_front(node);
    return true;
    
}

void printvector(vector<int>&res){
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
int main()
{
    vector<vector<int>>edgelist= {
        {1,2},{0,2},{5,4}, {2,4},{4,6}, {2,3},{3,7},{3,8}
    };
    int n=9;
    vector<vector<int>>graph(n);
    for(auto edge:edgelist){
        int a= edge[0];
        int b= edge[1];
        
        graph[a].push_back(b);
    }
    vector<int>visited(n,0);
    vector<int>curr(n,0);
    deque<int>dq;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(!dfs(i,visited,graph,dq,curr)) return {};
        }
    }
    vector<int>res;
    for(auto i:dq){
        res.push_back(i);
    }
    printvector(res);
    return 0;
}