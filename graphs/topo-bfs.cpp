#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>edgelist= {
        {1,2},{2,3},{2,4}, {3,5}, {4,5}
    };
    int n=6;
    vector<vector<int>>graph(n);
    for(auto edge:edgelist){
        int a= edge[0];
        int b= edge[1];
        
        graph[a].push_back(b);
    }
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++){
        for(int x:graph[i]){
            indegree[x]++;
        }
    }
    vector<int>res;

    queue<int>q;
    for(int i=1;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int f= q.front();
        q.pop();
        res.push_back(f);
        for(int nbr:graph[f]){
            indegree[nbr]--;
            if(indegree[nbr]==0){
                q.push(nbr);
            }
        }
    }
    for(int i =0;i<res.size();i++){
        cout<< res[i]<<" ";
    }
    return 0;
}