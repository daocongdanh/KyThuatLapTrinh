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
    for(int i=2;i<=sqrt(n);i++){
        if(nt(i)) cout << 1ll*i*i << " ";
    }
}
