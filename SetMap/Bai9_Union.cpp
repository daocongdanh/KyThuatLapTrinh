#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m; cin >> n >> m;
    set <int> s;
    int a[n], b[m];
    for(int &x : a){
        cin >> x;
        s.insert(x);
    }
    for(int &x : b){
        cin >> x;
        s.insert(x);
    }
    for(auto it = s.rbegin();it != s.rend();it++){
        cout << *it << " ";
    }
}
