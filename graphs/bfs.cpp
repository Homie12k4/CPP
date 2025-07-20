#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printbfs(int index, unordered_map<int,vector<int>>&map, int n){
    vector<int>visited(n+1);
    queue<int>q;

    q.push(index);
    visited[index]=1;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f;
        for(auto nbr:map[f]){
            if(!visited[nbr]){
                visited[nbr] = 1;
                q.push(nbr);
            }
        }
    }

}
int main()
{
    vector<vector<int>>edgelist= {
        {1,2},{2,3}, {3,4}, {4,2}, {1,3}
    };
    int n=6;
    unordered_map<int, vector<int>>map;
    for(int i=0;i<edgelist.size();i++){
        int u = edgelist[i][0]; 
        int v = edgelist[i][1]; 
        map[u].push_back(v);
        map[v].push_back(u);
    }
    printbfs(1,map,n);
}