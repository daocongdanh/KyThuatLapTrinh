#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll sum1 = abs(a[0] + a[1]);
    ll sum2 = abs(a[n-1] + a[n-2]);
    cout << max(sum1,sum2);
}
