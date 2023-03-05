#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tong(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int fbi(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    long long f1 = 0 , f2 = 1, fn;
    for(int i=3;i<=93;i++){
        fn = f1+f2;
        if(n==fn) return 1;
        f1=f2;
        f2=fn;
    }
    return 0;
}
int main(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        if(nt(i) && fbi(tong(i))) cout << i << " ";
    }
}
