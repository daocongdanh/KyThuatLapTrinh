#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            j++;
        }
        i++;
    }
    if(j==m) cout << "YES";
    else cout << "NO";
}
