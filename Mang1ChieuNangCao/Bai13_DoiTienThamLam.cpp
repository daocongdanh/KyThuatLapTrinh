#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >>n;
    int a[10] = {1000,500,200,100,50,20,10,5,2,1};
    ll ans = 0;
    for(int i=0;i<10;i++){
        ans += n/a[i];
        n = n % a[i];
    }
    cout << ans;
}
