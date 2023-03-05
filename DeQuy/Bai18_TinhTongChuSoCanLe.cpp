#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum1(ll n){
    if(n==0) return 0;
    if(n%2==0){
        return n%10 + sum1(n/10);
    }
    else return sum1(n/10);
}
int sum2(ll n){
    if(n==0) return 0;
    if(n%2==1){
        return n%10 + sum2(n/10);
    }
    else return sum2(n/10);
}
int main(){
    ll n; cin >> n;
    cout << sum1(n) << endl << sum2(n);
}
