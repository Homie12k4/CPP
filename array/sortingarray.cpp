#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertval(vector<int>&v, int val){
    if(v.empty() or v.back()<=val){
        v.push_back(val);
        return;
    }
    int temp = v.back();
    v.pop_back();
    insertval(v,val);
    v.push_back(temp);
    
}
void sortfun(vector<int>& v){
    if(v.empty() ){
        return;
    }
    int temp=v.back();
    v.pop_back();
    sortfun(v);
    insertval(v,temp);
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sortfun(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}