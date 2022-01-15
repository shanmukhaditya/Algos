#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 26;

array<int,2> m[26];

int main(){
    string s;
    int k =25;
    cin >> s;
    for(int i=0; i<26;++i)
        m[i] = {0,i};
    for(int i=0; i<s.length(); ++i){
        m[int(s[i]-'a')][0] += 1;
    }
    sort(m, m+26);

    while(m[k][0] != 0 and k>=0){
        for(int i=0; i<m[k][0]; ++i)
            cout << char(m[k][1]+97);
        --k;
    }
   // for(auto it= m.begin(); it != m.end(); ++it){
   //     for(int i=0; i<it->second; ++i)
   //         cout << (it)->first;
   // }
}