#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int tong(int n){
    if(n==1) return 1;
    else return n + tong(n-1);
}
int main(){
    int n; cin >> n;
    cout << tong(n) << endl;
}
