#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll b[], int n){
    for(int i=n-1;i>=2;i--){
        int l = 0, r = i-1;
        while(l<=r){
            ll res = b[l] + b[r];
            if(res == b[i]){
                return true;
            }
            else if(res > b[i]) r--;
            else l++;
        }
    }
    return false;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll b[n];
    for(int i=0;i<n;i++){
        b[i] = 1ll*a[i]*a[i];
    }
    sort(b,b+n);
    if(check(b,n)) cout << "YES";
    else cout << "NO";
}
