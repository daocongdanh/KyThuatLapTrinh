#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        if(t==1){
            int k, x; cin >> k >> x;
            v.insert(v.begin() + k, x);
        }
        else{
            int k; cin >> k;
            v.erase(v.begin() + k);
        }
    }
    if(v.empty()) cout << "EMPTY";
    else{
        for(auto x : v) cout << x << ' ';
    }
}
