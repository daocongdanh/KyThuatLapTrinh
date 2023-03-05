#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gt(int n){
    if(n==1 || n==0) return 1;
    else return n*gt(n-1);
}
int main(){
    int n; cin >> n;
    cout << gt(n) << endl;
}
