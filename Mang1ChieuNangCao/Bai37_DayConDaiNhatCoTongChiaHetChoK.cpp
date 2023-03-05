#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll F[n];
    for(int i=0;i<n;i++){
        if(i == 0) F[0] = a[0];
        else F[i] = F[i-1] + a[i];
    }
    map <ll,int> mp;
    int Max = -1;
    mp[0] = 0;
    for(int i=0;i<n;i++){
        int tmp = F[i] % k;
        if(tmp < 0) tmp += k;
        if(mp.find(tmp) == mp.end()){
            mp[tmp] = i;
        }
        else{
            int res;
            if(tmp == 0) res = i - mp[tmp] + 1;
            else res = i - mp[tmp];
            Max = max(Max,res);
        }
    }
    cout << Max;
}
