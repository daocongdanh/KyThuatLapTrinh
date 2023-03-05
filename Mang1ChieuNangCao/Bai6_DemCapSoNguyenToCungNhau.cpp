#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dem = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(a[i],a[j])==1) dem++;
        }
    }
    cout << dem;
}

