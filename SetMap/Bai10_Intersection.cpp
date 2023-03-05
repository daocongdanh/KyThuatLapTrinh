#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map <int,bool> mp;
    for(int &x : a){
        cin >> x;
        mp[x] = false;
    }
    for(int &x : b){
        cin >> x;
        if(mp[x] == false){
            mp[x] = true;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]] == true){
            cout << a[i] << " ";
            mp[a[i]] = false;
        }
    }
}
