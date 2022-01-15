#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k, c = 0, t;
    string s;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n >> k >> s;
        if (k == 0) {
            cout << "YES\n";
            continue;
        }
        if (k * 2 == n) {
            cout << "NO\n";
            continue;
        }
        bool b = true;
        for (int i = 0; i < k; ++i)
        {
            if (s[i] != s[n - i - 1])
                b = false;
        }

        if (b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}