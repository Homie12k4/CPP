#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertStack(stack<int>& st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insertStack(st,val);
    st.push(temp);
}

void reverseStack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int val = st.top(); 
    st.pop();
    reverseStack(st);
    insertStack(st,val);
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
    reverseStack(st);
    vector<int>res;
    

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
