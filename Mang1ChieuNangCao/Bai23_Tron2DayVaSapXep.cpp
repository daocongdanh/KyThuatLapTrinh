#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    int c[2*n], m=0;
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        c[m++] = a[i];
        c[m++] = b[i];
    }
    for(int i=0;i<m;i++) cout << c[i] << " ";
}
