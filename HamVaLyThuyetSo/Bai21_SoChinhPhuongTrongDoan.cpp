#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll a, b;
    cin >> a >> b;
    for(int i = ceil(sqrt(a)); i<=sqrt(b) ;i++){
        cout << 1ll*i*i << " ";
    }
}
