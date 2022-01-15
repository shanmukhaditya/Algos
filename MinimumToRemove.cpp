#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n;
    vector <int> arr;
    for(int i=0; i<n; ++i){
        //cout << " 1 ";
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cin >> m >> k;
    int sum = 0, i = 0, j=0, min_num = INT_MAX;
    bool found = false;

    while(i<n){
        sum = sum + arr[i];

        if(sum%k == m){
            min_num = min(min_num, (n- (i+1) + j));
            cout << sum<< " " << i << " 1 " << min_num << endl;
            found = true;
        }
        else if (sum%k > m){
            while(sum%k > m){
                sum = sum - arr[j];
                j++;
            }
            if(sum%k == m){
                min_num = min(min_num, (n- (i+1) + j));
                found = true;
            }
        }
        i++;
    }
    if (found)
        cout <<  min_num;
    else
        cout << -1;
    return 0;
}