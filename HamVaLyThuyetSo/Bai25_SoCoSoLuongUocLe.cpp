#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cp(ll n){
    int can = sqrt(n);
    if(1ll*can*can == n) return 1;
    return 0;
}
int main(){
    ll n; cin >> n;
    if(cp(n)) cout << "YES";
    else cout << "NO";
}
