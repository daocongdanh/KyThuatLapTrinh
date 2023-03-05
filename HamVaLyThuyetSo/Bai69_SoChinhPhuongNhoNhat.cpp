#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        ll cp = 1ll*i*i;
        if(cp%n==0){
            cout << cp;
            break;
        }
    }
}
