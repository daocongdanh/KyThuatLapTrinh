#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int dem(ll n){
    int cnt = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) cnt++;
    return cnt;
}
int main(){
    int n; cin >> n;
    ll m; cin >> m;
    ll res = 1;
    for(int i=1;i<=n;i++){
        res *= 28;
        res %= m;
    }
    cout << res;
}
