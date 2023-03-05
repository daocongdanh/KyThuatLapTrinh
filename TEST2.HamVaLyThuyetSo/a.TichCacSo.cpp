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
    int n; 
    ll res = 1;
    int mod = 1e9 + 7;
    while(cin >> n){
        res *= n;
        res %= mod;
    }
    cout << res;
}
