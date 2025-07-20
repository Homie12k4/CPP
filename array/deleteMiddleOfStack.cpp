#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertVal(stack<int>&st, int val){
    
}

void deleteMiddleOfStack(stack<int>&st,int n){
    if(st.size()==n/2){
        st.pop();
        return;
    }
    int val=st.top();
    st.pop();
    deleteMiddleOfStack(st,n);
    //insertVal(st,val);
    st.push(val);
}

int main()
{   
    int n;
    cin>>n;
    stack<int>st;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        st.push(v[i]);
    }
    if(st.size()%2==1){
        deleteMiddleOfStack(st,n+1);
    }else{
        deleteMiddleOfStack(st,n);
    }    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}