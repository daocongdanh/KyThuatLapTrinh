#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll sum, sum1, sum2;
    if(n%2==0){
        sum1= -n/2+n/2*(n/2-1)*(-2)/2;
        sum2 = 2*n/2 +n/2*(n/2-1)*2/2;
    }
    else{
        sum1= -(n+1)/2+(n+1)/2*((n+1)/2-1)*(-2)/2;
        sum2 = 2*(n-1)/2 +(n-1)/2*((n-1)/2-1)*2/2;
    }
    sum = sum1 + sum2;
    cout << sum << endl;
}
