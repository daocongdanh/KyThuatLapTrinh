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
    sort(v.begin(),v.end());
    for(int x : v) cout << x << ' ';
    cout << endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int x : v) cout << x << " ";
}
