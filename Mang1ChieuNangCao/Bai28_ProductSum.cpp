#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll res = 0;
    int mod = 1e9 + 7;
    for(int i=0;i<n;i++){
        res += 1ll* a[i] * i;
        res %= mod;
    }
    cout << res ;
}
