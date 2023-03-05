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
    int max = 0, val;
    for(int x : a){
        if(mp[x] > max){
            max = mp[x];
            val = x;
        }
    }
    cout << val << " " << max;
}
