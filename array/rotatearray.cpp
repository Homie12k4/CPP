#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void rotated(vector<int>&v,int start, int end){
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}

void rotatearray(vector<int>&v,int k){
    int n=v.size();
    k=k%n;
    rotated(v,0,n-k-1);
    rotated(v, n-k, n-1);
    rotated(v, 0,n-1);
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector<int>v(n);
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    rotatearray(v,k);
    cout<<"printing rotated array";
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}