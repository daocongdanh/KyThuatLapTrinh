#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int check(ll n){
    while(n){
        int div = n%10;
        if(div != 0 && div != 6 && div !=8) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    ll n;
    cin >> n;
    cout << check(n) <<endl;
}
