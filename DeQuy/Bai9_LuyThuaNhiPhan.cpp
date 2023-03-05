#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod = 1e9 + 7;
ll binPow(int a, int b){
    if(b==0) return 1;
    ll res = binPow(a,b/2);
    if(b%2==0){
        return ((res % mod) * (res % mod)) % mod;
    }
    else return ((res % mod) * (res % mod)) % mod * (a % mod) % mod;
}
int main(){
    int a, b; cin >> a >> b;
    cout << binPow(a,b);
}
