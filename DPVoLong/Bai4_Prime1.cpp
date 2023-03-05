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
int cnt = 0;
int main(){
    int t; cin >> t;
    sieve();
    for(int i=0;i<=1000000;i++){
        if(prime[i]){
            cnt++;
        }
        F[i] = cnt;
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
