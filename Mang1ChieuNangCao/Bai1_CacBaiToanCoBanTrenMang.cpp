#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
bool dx(int a[], int n){
    int l = 0,r = n-1;
    while(l<=r){
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int ktra = dx(a,n);
    int mod = 1e9 +7;
    int Max = -1e9 +1 , Min = 1e9 + 1, maxidx, minidx, demnt = 0;
    ll ans = 1;
    for(int i=0;i<n;i++){
        if(a[i]>Max){
            Max = a[i];
            maxidx = i;
        }
        if(a[i]<=Min){
            Min = a[i];
            minidx = i;
        }
        if(nt(a[i])) demnt++;
        ans *= a[i];
        ans %= mod;
    }
    cout << Max << " " << maxidx << endl;
    cout << Min << " " << minidx << endl;
    cout << demnt << endl;
    sort(a, a+n);
    ll res = a[n-1] * a[n-2];
    ll kq = a[0] * a[1];
    cout << max(res,kq) << endl;
    if(ktra) cout << "YES" << endl;
    else cout << "NO" << endl;
    cout << ans << endl;
}

