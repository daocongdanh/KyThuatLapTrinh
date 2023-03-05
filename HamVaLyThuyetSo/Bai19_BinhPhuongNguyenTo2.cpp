#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int dem=0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            if(dem==1) return 0;
        }
    }
    if(n!=1) return 0;
    return 1;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(check(i)) cout << i << " ";
    }
}
