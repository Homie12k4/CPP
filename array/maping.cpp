#include <bits/stdc++.h>
using namespace std;
int main() {
    int max=INT_MIN;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZBHFDJSBFKDSJLBFHJDSKJFHDBSJFKHDHSBJFBDSJHVJFDBVSJHFHUIDKSJBFUKSDVBJH";
    map<char, int> umap;
    for(char c: s) {
        umap[c]++;
    }
    for(auto i = umap.begin(); i != umap.end(); i++) {
        // cout << it->first << "\t" << it->second << endl;
        if (i  ->second > max){
            max=i->second;
        } 
    
    }
    cout<<max << endl;
    return 0;
}