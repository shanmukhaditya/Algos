#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string a1, a2;
    cin >> a1 >> a2;
    transform(a1.begin(), a1.end(), a1.begin(), ::tolower); 
    transform(a2.begin(), a2.end(), a2.begin(), ::tolower);
    if(a1>a2)
        cout << 1;
    else if(a1 < a2)
        cout << -1;
    else 
        cout << 0;
}