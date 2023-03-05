#include <bits/stdc++.h>
using namespace std;

int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tongcs(int n){
    int sum =0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return nt(sum);
}
int cs(int n){
    while(n){
        int div = n%10;
        if(div != 2 && div != 3 && div !=5 && div !=7) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for(int i=a ;i<=b;i++){
        if(cs(i) && nt(i) && tongcs(i)) dem++;
    }
    cout << dem; 
}

