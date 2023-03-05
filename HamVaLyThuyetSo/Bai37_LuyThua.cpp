#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lt(ll a, ll b, int mod){
    a %= mod;//a len den 10^12
    ll res = 1;
    while(b!=0){
        if(b%2==1){
            res = res * a % mod;
        }
        a = a * a % mod;
        b/=2;
    }
    return res;
}
int main(){
    ll a, b;
    cin >> a >> b;
    int mod = 1e9+7;
    cout << lt(a,b,mod);
}
