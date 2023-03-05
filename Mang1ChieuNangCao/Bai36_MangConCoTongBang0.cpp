#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll F[n];
    for(int i=0;i<n;i++){
        if(i == 0) F[0] = a[0];
        else F[i] = F[i-1] + a[i];
    }
    map <ll,int> mp;
    mp[0] = 0;
    for(int i=0;i<n;i++){
        if(mp.find(F[i]) == mp.end()){
            mp[F[i]] = i;
        }
        else{
            cout << 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
