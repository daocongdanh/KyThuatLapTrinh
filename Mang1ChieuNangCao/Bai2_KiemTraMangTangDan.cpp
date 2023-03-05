#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int a[], int n){
    for(int i=1 ;i<n;i++){
        if(a[i] <= a[i-1]) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a,n)) cout << "YES";
    else cout << "NO";
}

