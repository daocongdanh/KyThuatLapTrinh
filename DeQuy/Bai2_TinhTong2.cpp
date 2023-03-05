#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tong(int n){
    if(n==1) return 1;
    else return n*n + tong(n-1);
}
int main(){
    int n; cin >> n;
    cout << tong(n) << endl;
}
