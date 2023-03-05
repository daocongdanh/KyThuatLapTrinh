#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll min = 1e18 + 1;
    int dem =0;
    for(int i=1;i<n;i++){
        ll res = abs(a[i]-a[i-1]);
        if(res < min){
            min = res;
        }
    }
    for(int i=1;i<n;i++){
        ll res = abs(a[i]-a[i-1]);
        if(res == min){
            dem++;
        }
    }
    cout << min << " " << dem;
}
