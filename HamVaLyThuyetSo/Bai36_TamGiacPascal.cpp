#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void pascal(ll n){
    ll p[n][n];
    int mod = 1e9+7;
    for(ll i =0;i<n;i++){
        for(ll j =0;j<=i;j++){
            if(j==0 || i==j) p[i][j] = 1;
            else{
                p[i][j] = p[i-1][j-1] + p[i-1][j];
                p[i][j] %=mod;
            }
            cout << p[i][j] << " ";
        }
        cout<<endl;
    }
}
int main(){
    ll n; cin >> n;
    pascal(n);
}
