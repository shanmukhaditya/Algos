#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> s;
        if (s.length() >10){
            s = s[0] + to_string(s.length()-2) + s[s.length()-1];
        }
        cout << s << endl;
    }
    return 0;
}