#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    int sum = 0;
    n = abs(n);
    while(n){
        if(n%10 %2 == 0){
            sum+= n%10;
        }
        n/=10;
    }
    cout << sum;
}
