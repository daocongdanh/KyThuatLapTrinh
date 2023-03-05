#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int tn(int n){
    int tmp = n;
    int cnt = 0;
    while(n){
        cnt = cnt * 10 + n%10;
        n/=10;
    }
    return tmp == cnt;
}
int check(int n){
    int dem =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) dem++;
    return dem>=3;
}
int main(){
    int a, b;
    cin >> a >> b;
    int ok=0;
    for(int i=a;i<=b;i++){
        if(tn(i) && check(i)){
            cout << i << " ";
            ok=1;
        }
    }
    if(ok==0) cout <<"-1";
}
