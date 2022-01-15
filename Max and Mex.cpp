#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    int n, k, t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        map<int,int> s;
        cin >> n >> k;
        int ma =0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ma = max(ma, x);
            s[x] = 1;
        }
        if(k == 0){
            cout << n << endl;
            continue;
        }
        if(ma == n-1){
            cout << n+k << endl;
            continue;
        }
        int mi =0;
        for (auto it: s){
            if(it.first == mi)
                ++mi;
            else
                break;            
        }
        if(s[ceil((ma+mi)/2.0)] == 1)
            cout << n << endl;
        else   
            cout << n+1 << endl;
        
    }
}