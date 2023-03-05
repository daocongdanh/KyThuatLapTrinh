#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int check(ll n){
    int res=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int dem=0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            if(dem>=2) return 0;
            else if(dem == 1) res++;
        }
    }
    if(n!=1) res++;
    return res == 3;
}
int main(){
    ll n; cin >> n;
    cout << check(n) << endl;
}
