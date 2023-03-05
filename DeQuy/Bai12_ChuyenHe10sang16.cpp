#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dq(ll n){
    if(n<16){
        if(n<=9) cout << n;
        else cout << char(n+55);
    }
    else{
        dq(n/16);
        int res = n%16;
        if(res<=9) cout << res;
        else cout << char(res+55);
    }
}

int main(){
    ll n; cin >> n;
    dq(n);
}
