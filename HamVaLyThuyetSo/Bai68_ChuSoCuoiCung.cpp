#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    int mod = 1e9 + 7;
    ll sum =1;
    while(t--){
        int x; cin >> x;
        sum*=x;
        sum %= mod;
    }
    cout << sum;
}
