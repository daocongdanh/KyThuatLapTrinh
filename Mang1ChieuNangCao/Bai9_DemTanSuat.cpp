#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int cnt[10000001];
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(pair<int,int> x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(mp[a[i]]!=0){
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]]=0;
        }
    }
}

