#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int a[], int n){
    if(n==1) return 1;
    else{
        int r = a[n-1];
        if(r <= a[n-2]) return 0;
        else return check(a,n-1);
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(check(a,n)) cout << "YES";
    else cout << "NO";
}
