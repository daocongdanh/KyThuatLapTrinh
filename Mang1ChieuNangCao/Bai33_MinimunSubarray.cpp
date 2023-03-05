#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, r;
    ll sum = 0;
    int Min = 1e9;
    for(r = 0; r < n; r++){
        sum += a[r];
        while(sum > k || a[l]==0){
            sum -= a[l];
            l++;
        }
        if(sum==k) Min = min(Min,r - l + 1);
    }
    if(Min == 1e9) cout << -1;
    else cout << Min;
}
