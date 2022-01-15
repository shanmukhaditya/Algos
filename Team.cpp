#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, a, b, c, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1)
            ++ans;
    }
    cout << ans;
}