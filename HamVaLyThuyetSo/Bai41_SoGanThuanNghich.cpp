#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int check(ll n){
    int div = n%10;
    n/=10;
    ll tmp = n;
    ll cnt = 0;
    int mu = 0;
    while(n>=10){
        cnt = cnt*10 + n%10;
        n/=10;
        mu++;
    }
    ll temp = pow(10,mu);
    if((tmp % temp) == cnt && (n*2 == div || div*2 == n)) return 1;
    else return 0;
}
int main(){
    ll n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}
