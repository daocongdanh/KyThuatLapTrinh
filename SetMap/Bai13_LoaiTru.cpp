#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m; cin >> n >> m;
    map <int,bool> mp;
    int a[n], b[m];
    for(int &x : a){
        cin >> x;
        mp[x] = true;
    }
    for(int &x : b){
        cin >> x;
        if(mp[x] == true){
            mp[x] = false;
        }
    }
    for(auto x : mp){
        if(x.second == true) cout << x.first << " ";
    }
}
