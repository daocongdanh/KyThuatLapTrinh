#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int prime[1000001];
void sieve(){
    for(int i=0;i<=1000000;i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j = i*i ;j<=1000000;j+=i){
                prime[j] = 0;
            }
        }
    }
}
ll F[1000001];
int mod = 1e9 + 7;
int main(){
    int t; cin >> t;
    sieve();
    F[0] = 0;
    F[1] = 0;
    F[2] = 2;
    for(int i=3;i<=1000000;i++){
        if(prime[i]){
            F[i] = i * F[i-1];
        }
        else{
            F[i] = F[i-1];
        }
        F[i] %= mod;
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
