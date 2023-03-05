#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(a[i] <= a[i-1]){
            ans += a[i-1] - a[i] + 1;
            a[i] = a[i-1] + 1;
        }
    }
    cout << ans << endl;
}
