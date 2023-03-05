#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int a[], int n){
    if(n==0){
        if(a[0]%2==0) return 1;
        else return 0;
    }
    else{
        if(a[n-1] %2 !=0) return 0;
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
