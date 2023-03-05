#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// M = a^x*b^y*c^z =>> zuoc = (x+1)(y+1)(z+1)
int main(){
    int t; cin >> t;
    ll uoc=1;
    int mod = 1e9 +7;
    while(t--){
        int p, e;
        cin >> p >> e;
        uoc *= (e+1);
        uoc %= mod;
    }
    cout << uoc;
}
