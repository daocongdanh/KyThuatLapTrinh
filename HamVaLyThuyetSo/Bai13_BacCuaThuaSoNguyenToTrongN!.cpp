#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll bac(ll n, int p){
    ll cnt = 0;
    for(long long i = p;i<=n;i*=p){
        cnt += n/i;
    }
    return cnt;
}
int main(){
    ll n; cin >> n;
    int p; cin >> p;
    cout << bac(n,p);
}
