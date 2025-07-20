#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>asteroid(vector<int>&arr){
    vector<int>store;
    for(auto val:arr){
        if(arr.empty() or arr.back()<0) store.push_back(val);
        if(!arr.empty() && arr.back() + val ==0){
            arr.pop_back();
        }
        else if(val>0) store.push_back(val);
        while(!arr.empty() and arr.back() < abs(val)){
            arr.pop_back();
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    asteroid(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}