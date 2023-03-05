#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    int mod = 1e9 +7;
    ll cnt=0;
    for(ll i =5;i<=n;i*=5){
        cnt += n/i;
        cnt %= mod;
    }
    cout << cnt;
}
