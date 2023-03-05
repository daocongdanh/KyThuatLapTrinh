#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    ll n; cin >> n;
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(nt(i)) dem++;
    }
    cout << dem;
}
