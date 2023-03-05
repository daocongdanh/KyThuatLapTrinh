#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
void check(int n){
    if(n==1) cout << "1"<< endl;
    else if(n%2==0) cout << "2" << endl;
    else if(nt(n)) cout << n << endl;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout << i << endl;
                return;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        check(i);
    }
}
