#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in1(ll n){
    if(n!=0){
        in1(n/10);
        cout << n%10 << " ";
    }
}
void in2(ll n){
    if(n!=0){
        cout << n%10 << " ";
        in2(n/10);
    }
}
int main(){
    ll n; cin >> n;
    in1(n);
    cout << endl;
    in2(n);
}
