#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, ans=0;
    string s;
    cin >> n;
    for(int i=0; i<n;++i){
        cin >> s;
        if(s == "++X" || s == "X++")
            ++ans;
        else 
            --ans;
    }

    cout << ans;
}