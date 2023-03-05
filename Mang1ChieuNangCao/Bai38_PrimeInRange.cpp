#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int prime[1000001];
void sieve(){
    for(int i=0;i<=1000000;i++) prime[i]=1;
    prime[0] = prime[1] = 0;
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j = i*i ;j<=1000000;j+=i){
                prime[j] = 0;
            }
        }
    }
}
int cnt[1000000];
int n=0;
int main(){
    sieve();
    int q; cin >> q;
    for(int i=2;i<=1000000;i++){
        if(prime[i]) cnt[i] = ++n;
    }
    while(q--){
        int l,r; cin >> l >> r;
        int idx1,idx2;
        for(int i=l;i<=r;i++){
            if(prime[i]){
                idx1 = i;
                break;
            }
        }
        for(int i=r;i>=l;i--){
            if(prime[i]){
                idx2 = i;
                break;
            }
        }
        cout << cnt[idx2] - cnt[idx1] + 1 << endl;
    }
}
