#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll gcd(ll a, ll b){
    while(b!=0){
        int r = a%b;
        a = b ;
        b = r;
    }
    return a;
}
ll lcm(ll a, ll b){
    return a / gcd(a,b)*b;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << gcd(a,b) << " " << lcm(a,b);
}
