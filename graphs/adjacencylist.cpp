#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printmap(unordered_map<int,vector<int>>map){
    for(auto i:map){
        cout<<"for i "<< i.first<<" neighbors ";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>>edgelist = {
        {1,2},{2,3}, {3,4}, {4,2}, {1,3}
    };
    unordered_map<int, vector<int>>map;
    for(int i=0;i<edgelist.size();i++){
        int u = edgelist[i][0];
        int v = edgelist[i][1];

        map[u].push_back(v);
        map[v].push_back(u);
    }
    printmap(map);
}