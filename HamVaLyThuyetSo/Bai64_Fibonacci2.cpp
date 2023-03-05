#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int fbi(ll n){
    if(n==0) return 1;
    if(n==1) return 1;
    long long f1 = 0 , f2 = 1, fn;
    for(int i=3;i<=93;i++){
        fn = f1+f2;
        if(fn == n) return 1;
        f1=f2;
        f2=fn;
    }
    return 0;
}
int main(){
    long long n; 
    cin >> n;
    if(fbi(n)) cout << "YES";
    else cout << "NO";
    
}
