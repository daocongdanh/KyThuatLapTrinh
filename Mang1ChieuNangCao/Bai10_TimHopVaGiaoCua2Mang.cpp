#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map <int,int> mp1;
    map <int,bool> mp2;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int i=0;i<n;i++){
        mp1[a[i]]=1;
        mp2[a[i]] = true;
    }
    for(int i=0;i<m;i++){
        if(mp1[b[i]]==1) mp1[b[i]]=2;
        mp2[b[i]] = true;
    }
    for(auto x : mp1){
        if(x.second == 2) cout << x.first << " ";
    }
    cout << endl;
    for(auto x : mp2){
        if(x.second) cout << x.first << " ";
    }
}

