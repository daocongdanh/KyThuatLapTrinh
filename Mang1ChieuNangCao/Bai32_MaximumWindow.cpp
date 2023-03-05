#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset <int> ms;
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    for(int i=k;i<n;i++){
        cout << *ms.begin() << " " << *ms.rbegin() << endl;
        ms.insert(a[i]);
        ms.erase(ms.find(a[i-k]));    
    }
    cout << *ms.begin() << " " << *ms.rbegin() << endl;
}
