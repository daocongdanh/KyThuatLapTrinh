#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int n){
    while(n>=10){
        int r = n%10;
        if(((r - (n/10)%10) != 1) && ((r - (n/10)%10) !=-1)) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    int a, b; cin >> a >> b;
    int ok = 0;
    for(int i=a;i<=b;i++){
        if(check(i)){
            cout << i << " ";
            ok = 1;
        }
    }
    if(ok==0) cout << "NONE";
}
