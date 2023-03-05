#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int x : a){
        mp[x]++;
    }
    int max = 0, val;
    for(auto x : mp){
        if(x.second > max){
            max = x.second;
            val = x.first;
        }
    }
    cout << val << " " << max;
}
