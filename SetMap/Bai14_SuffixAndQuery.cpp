#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll F[1000001];
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    set <int> s;
    reverse(a,a+n);//lat nguoc mang lai roi in 0 -> l
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        F[i] = s.size();
    }
    int q; cin >> q;
    while(q--){
        int l; cin >> l;
        cout << F[n-l-1] << endl;
    }
}
