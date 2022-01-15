#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, ans =0;
    char c, prev;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> c;
        if(c == prev)
            ++ans;
        prev = c;
    }
    cout << ans;
}