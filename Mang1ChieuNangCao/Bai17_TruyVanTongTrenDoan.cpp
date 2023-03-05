#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int q; cin >> q;
    ll F[n];
    for(int i=0;i<n;i++){
        if(i==0) F[0] = a[0];
        else F[i] = F[i-1] + a[i];
    }
    while(q--){
        int l, r; cin >> l >> r;
        l--, r--;
        if(l==0) cout << F[r] << endl;
        else cout << F[r] - F[l-1] << endl;
    }
}
