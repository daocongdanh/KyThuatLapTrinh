#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    int mod = 1e9 +7;
    ll kq =0;
    while(t--){
        int x; cin >> x;
        kq = kq *10 + x;
        kq %= mod;
    }
    cout << kq;
}
