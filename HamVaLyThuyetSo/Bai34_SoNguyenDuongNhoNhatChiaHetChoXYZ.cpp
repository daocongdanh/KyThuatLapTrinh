#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(int a,int b){
    return a/gcd(a,b)*b;
}
int main(){
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    ll bcnn = lcm(lcm(x,y),z);
    ll limit = pow(10,n-1);
    if(bcnn >= pow(10,n)){
        cout << "-1";
    }
    else cout << (limit + bcnn - 1)/ bcnn * bcnn;
}
