#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
/*Neu p la so nguyen to va 2^p-1 la so nguyen to 
=> (2^(p-1)*(2^p-1) la so hoan hao
ll = 2^64 => p <=32
*/
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int hh(ll n){
    for(int i=2;i<=32;i++){
        if(nt(i)){
            ll tmp = pow(2,i) - 1;
            if(nt(tmp)){
                ll hh = 1ll*tmp*pow(2,i-1);
                if(hh == n) return 1;
            }
        }
    }
    return 0;
}
int main(){
    ll n;
    cin >> n;
    if(hh(n)) cout << "YES";
    else cout << "NO";
}
