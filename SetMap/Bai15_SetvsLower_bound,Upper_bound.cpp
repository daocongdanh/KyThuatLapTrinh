#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binary_search(int b[], int n, int x){
    int res = -1, l = 0, r = n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(b[m] <= x){
            res = b[m];
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int main(){
    int n; cin >> n;
    int a[n];
    multiset <int> ms;
    for(int &x : a){
        cin >> x;
        ms.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt; cin >> tt;
        if(tt == 1){
            int x; cin >> x;
            ms.insert(x);
        }
        else if(tt == 2){
            int x; cin >> x;
            if(ms.find(x) != ms.end()){
                ms.erase(ms.find(x));
            }
        }
        else if(tt == 3){
            int x; cin >> x;
            auto it = lower_bound(ms.begin(),ms.end(),x);
            if(it != ms.end()) cout << *it << endl;
            else cout << -1 << endl;
        }
        else{
            int x; cin >> x;
            int b[10000];
            int m = 0;
            for(auto x : ms){
                b[m++] = x;
            }
            cout << binary_search(b,m,x) << endl;
        }
    }
}
