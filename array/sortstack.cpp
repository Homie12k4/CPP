#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertval(stack<int>& st, int val){
    if(st.empty() or st.top()<=val){
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insertval(st,val);
    st.push(temp);

}

void sortstack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int val=st.top();
    st.pop();
    sortstack(st);
    insertval(st,val);

}
int main(){   
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
    sortstack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}