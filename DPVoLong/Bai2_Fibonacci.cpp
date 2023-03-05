#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll F[10000001];
int mod = 1e9 + 7;
void kt(){
    F[0] = 0;
    F[1] = 1;
    for(int i=2;i<=10000000;i++){
        F[i] = F[i-1] + F[i-2];
        F[i] %= mod;
    }
}
int main(){
    int t; cin >> t;
    kt();
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
