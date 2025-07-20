#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char, int> u1;
    unordered_map<char, int> u2;
    for(char ch = 'a'; ch <= 'z'; ch++){
        u1[ch]++;
        u2[ch]++;
    }
    u1['h']++;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(u1[ch] != u2[ch]){
            cout << "Map error: " << ch << " U1 = " << u1[ch] << " U2 = " << u2[ch] << endl;
        }
    }

    cout << "Map Comparision completed." << endl;

    return 0;
}