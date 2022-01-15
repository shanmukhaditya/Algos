#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector <int> a;
    int n, k, step, ans=0;
    cin >>n >> k;
    for(int i=0; i< n;++i){
        int x;
        cin >>x;
        a.push_back(x);
        if(i == k-1)
            step = x;
    }
    for (int i=0; i<n;++i){
        if (a[i] >= step and a[i]>0)
            ++ans;
        else
            break;
        
    }
    cout << ans;

}