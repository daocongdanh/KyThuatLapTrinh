#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll F[10000001];
int main(){
    int t; cin >> t;
    int mod = 1e9 + 7;
    ll res = 1;
    for(int i=1;i<=10000000;i++){
        res *= i;
        res %= mod;
        F[i] = res;
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
