#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]==2){
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
