#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    set <int> s;
    for(int &x : a){
        cin >> x;
        s.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(s.find(x) != s.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
