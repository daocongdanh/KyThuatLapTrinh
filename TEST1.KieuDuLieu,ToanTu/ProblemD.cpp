#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    int max = 0;
    int min = 10;
    if(n<10){
        max = min =n;
    }
    else{
        while(n){
            int div = n%10;
            if(div > max) max = div;
            if(div < min) min = div;
            n/=10;
        }
    }
    cout << max << " " << min;
}
