#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dx(int a[], int l, int r){
    if(l>r) return 1;
    if(a[l] != a[r]) return 0;
    else return dx(a,l+1,r-1);
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(dx(a,0,n-1)) cout << "YES";
    else cout << "NO";
}
