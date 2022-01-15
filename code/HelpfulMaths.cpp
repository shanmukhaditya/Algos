#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int start = 0, end, n =0;
    vector<string> arr;
    string s, del = "+", pad = "";
    cin >> s;
    end = s.find(del);
    while(end != -1){
        //cout << s.substr(start, end-start)<<" " <<start<<" "<< end-start<< "\n";
        arr.push_back(s.substr(start, end-start));
        start = end + del.size();
        end = s.find(del, start);
    }
    //cout << s.substr(start, end-start)<<" " <<start<<" "<< end-start<< "\n";
    arr.push_back(s.substr(start, end-start));
    sort(arr.begin(),arr.end() );
    for(auto it: arr){
        cout << pad<< it ;
        pad = "+";
    }
}