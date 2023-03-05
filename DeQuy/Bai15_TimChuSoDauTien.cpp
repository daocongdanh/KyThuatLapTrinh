#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int firstdigit(ll n){
    if(n<10) return n;
    return firstdigit(n/10);
}

int main(){
    ll n; cin >> n;
    cout << firstdigit(n);
}
