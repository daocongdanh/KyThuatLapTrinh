#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll sum1 = 0, sum2 = 0;
    if(k<=n/2){
        for(int i=0;i<k;i++){
            sum1 += a[i];
        }
        for(int i=k;i<n;i++){
            sum2+=a[i];
        }
    }
    else{
        for(int i=0;i<n-k;i++){
            sum1 += a[i];
        }
        for(int i=n-k;i<n;i++){
            sum2+=a[i];
        }
    }
    cout << sum2 - sum1;
}
