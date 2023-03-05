#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int p, x;
    cin >> p >> x;
    ll res = 1;
    for(int i=1;i<=x ;i++){
        res *= p;
        res %= 10;
    }
    cout << res;
}
