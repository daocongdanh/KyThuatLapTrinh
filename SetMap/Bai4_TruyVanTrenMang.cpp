#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    multiset <int> s;
    for(int &x : a){
        cin >> x;
        s.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt; cin >> tt;
        if(tt==1){
            int x; cin >> x;
            s.insert(x);
        }
        else if(tt==2){
            int x; cin >> x;
            if(s.find(x) != s.end()){
                s.erase(s.find(x));
            }
        }
        else{
            int x; cin >> x;
            if(s.find(x) != s.end()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
