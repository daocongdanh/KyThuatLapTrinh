#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void binary(ll n){
    if(n<2){
        cout << n;
    }
    else{
        binary(n/2);
        cout << n%2;
    }
}
int main(){
    ll n; cin >> n;
    binary(n);
}
