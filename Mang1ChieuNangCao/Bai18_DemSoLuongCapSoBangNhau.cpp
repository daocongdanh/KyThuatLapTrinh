#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tohop(int n){
    return 1ll*n*(n-1)/2;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    ll dem = 0;
    for(auto x : mp){
        if(x.second > 1){
            dem += tohop(x.second);
        }
    }
    cout << dem << endl;
}
