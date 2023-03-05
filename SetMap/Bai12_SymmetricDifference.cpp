#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map <int,bool> mp1;
    map <int,bool> mp2;
    set <int> s;
    for(int &x : a){
        cin >> x;
    }
    for(int &x : b){
        cin >> x;
    }
    for(int x : a){
        mp1[x] = true;
    }
    for(int x : b){
        if(mp1[x] == true){
            mp1[x] = false;
        }
    }
    for(int x : b){
        mp2[x] = true;
    }
    for(int x : a){
        if(mp2[x] == true){
            mp2[x] = false;
        }
    }
    for(auto x : mp1){
        if(x.second == true){
            s.insert(x.first);
        }
    }
    for(auto x : mp2){
        if(x.second == true){
            s.insert(x.first);
        }
    }
    for(auto x : s) cout << x << " ";
}
