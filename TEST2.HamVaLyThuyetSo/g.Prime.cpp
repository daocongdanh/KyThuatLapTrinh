#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//int check(int n){
//    while(n>=10){
//        int r = n%10;
//        if((r - (n/10)%10 != 1) || (r - (n/10)%10 !=-1)) return 0;
//        n/=10;
//    }
//    return 1;
//}
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tong(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int tn(int n){
    int cnt = 0;
    int m = n;
    while(n){
        cnt = cnt*10 + n%10;
        n/=10;
    }
    return cnt == m;
}
int main(){
    int a,b; cin >> a >> b;
    int check = 0;
    for(int i=a;i<=b;i++){
        if(tn(i) && nt(tong(i))){
            cout << i << " ";
            check = 1;
        }
    }
    if(check==0) cout << "NONE";
}
