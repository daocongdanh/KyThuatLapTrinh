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
    int tmp = n;
    int sum=0;
    int ok =0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    while(tmp){
        if(tmp%10==6){
            ok=1;
            break;
        }
        tmp/=10;
    }
    return ok==1 && sum%10==8;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(tn(i) && check(i)){
            cout << i << " ";
        }
    }
}
