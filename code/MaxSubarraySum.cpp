#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e5;

int main(){
    int n, a[mx], k;
    cin >> n>> k;
    for(int i=0; i<n;++i){
        cin >> a[i];
    }
    int prev = a[0], maxi;
    maxi = prev;
    for(int i=1; i<n;++i){
        prev = max(prev +a[i], prev);
        if (prev > maxi and maxi <= k){
            maxi = prev;
            cout << i << " ";
        }
        else if(maxi > k)
            break;

    }
    cout << endl << maxi;



}