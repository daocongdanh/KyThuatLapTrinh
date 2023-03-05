#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll fbi(int n){
    int mod = 1e9+7;
    if(n==1) return 0;
    if(n==2) return 1;
    long long f1 = 0 , f2 = 1, fn;
    for(int i=3;i<=n;i++){
        fn = f1+f2;
        fn %= mod;
        f1=f2;
        f2=fn;
    }
    return fn;
}
int main(){
    int n; cin >> n;
    ll fbinaci = fbi(n);
    cout << fbinaci;
}
