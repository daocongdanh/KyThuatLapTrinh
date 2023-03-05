#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tohop(int k, int n){
    if(k==0 || k==n) return 1;
    return tohop(k-1,n-1) + tohop(k,n-1);
}
int main(){
    int n,k; cin >> n >> k;
    cout << tohop(k,n) << endl;
}
