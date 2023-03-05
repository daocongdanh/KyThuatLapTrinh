#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int x : a){
        mp[x]++;
    }
    for(int x : a){
        if(mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
