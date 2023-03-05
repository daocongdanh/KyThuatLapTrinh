#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int lt(int x){
    ll res = 1;
    ll bin = 2;
    while(x!=0){
        if(x%2==1){
            res = res * bin;
        }
        bin = bin * bin;
        x/=2;
    }
    return res;
}
int main(){
    int n, x;
    cin >> n >> x;
    int mod = n % lt(x);
    if(x<=31){
        cout << mod;
    }
    else cout << n;
}
