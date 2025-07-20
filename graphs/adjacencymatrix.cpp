#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printmat(vector<vector<int>>mat){
    for(int i=1;i<=4;i++){
        cout<<"NODE "<<i<< " Neighbors= ";
        for(int j=1;j<=4;j++){
            if(mat[i][j]==1){
                cout<<j<< " ";
            }
        }
        cout<<endl;
    }
}


int main()
{
    vector<vector<int>>edgelist ={
        {1,2},{2,3}, {3,4}, {4,2}, {1,3}
    };
    int n=5;
    vector<vector<int>>mat(5,vector<int>(5,0)) ;
    for(int i=0;i<edgelist.size();i++){
        int row = edgelist[i][0];
        int col = edgelist[i][1];

        mat[row][col]=1;
        mat[col][row]=1;
    }
    printmat(mat);
}    
    
    
