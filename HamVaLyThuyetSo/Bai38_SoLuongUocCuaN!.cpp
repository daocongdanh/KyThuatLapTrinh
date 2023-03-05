#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// M = a^x*b^y*c^z =>> zuoc = (x+1)(y+1)(z+1)
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n; cin >> n;
    int mod = 1e9 +7;
    ll uoc = 1;
    for(int i=1;i<=n;i++){
        int tmp = i;
        int mu = 0;
        if(nt(tmp)){
            for(int j = tmp;j<=n;j*=tmp){
                mu += n/j;
            }
        }
        uoc *= (mu+1);
        uoc %= mod;
    }
    cout << uoc;
}
