#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void pt(int n, int k){
    int res=0;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            res++;
            if(res==k){
                cout << i << endl;
            }
            n/=i;
        }
    }
    if(n!=1) res++;
    if(res==k) cout << n << endl;
    if(k>res) cout << "-1";
}
int main(){
    int n, k;
    cin >> n >> k;
    pt(n,k);
}
