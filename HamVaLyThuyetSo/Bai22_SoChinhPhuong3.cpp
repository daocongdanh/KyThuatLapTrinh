#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll a, b;
    cin >> a >> b;
    int dem = 0;
    for(int i = ceil(sqrt(a)); i<=sqrt(b) ;i++){
        dem++;
    }
    cout << dem << endl;
}
