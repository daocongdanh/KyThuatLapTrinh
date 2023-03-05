#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int l, r; cin >> l >> r;
    reverse(v.begin(), v.end());
    for(int x : v) cout << x << " ";
    cout << endl;
    reverse(v.begin()+l, v.begin() + r + 1);
    for(int x : v) cout << x << " ";
}
