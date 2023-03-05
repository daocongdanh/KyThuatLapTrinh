#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(ll n){
    if(n<10){
        if(n%2==0) return 1;
        else return 0;
    }
    int r = n%10;
    if(r%2==1) return 0;
    else return check(n/10);
}
int main(){
    ll n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}
