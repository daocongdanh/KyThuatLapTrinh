#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    map <int,int> mp;
    for(int &x : a){
        cin >> x;
        mp[x]++;
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]!=0){
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
}
