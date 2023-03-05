#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sumdigit(ll n){
    if(n<10) return 1;
    return 1 + sumdigit(n/10);
}

int main(){
    ll n; cin >> n;
    cout << sumdigit(n) << endl;
}
