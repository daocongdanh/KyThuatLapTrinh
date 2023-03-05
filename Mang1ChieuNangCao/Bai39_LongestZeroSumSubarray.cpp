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
//    for(int x : F) cout << x << " ";
    map <ll,int> mp;
    mp[0] = 0;
    int Max = -1, pos;
    for(int i=0;i<n;i++){
        if(mp.find(F[i]) == mp.end()){
            mp[F[i]] = i;
        }
        else{
            int res;
            if(mp[F[i]] == 0) res = i - mp[F[i]] + 1;
            else res = i - mp[F[i]];
            if(res > Max){
                Max = res;
                pos = i - Max + 1;
            }
        }
    }
    if(Max == -1) cout << "NOT FOUND";
    else{
        for(int i=0;i<Max;i++){
            cout << a[pos + i] << " ";
        }
    }
    
}
