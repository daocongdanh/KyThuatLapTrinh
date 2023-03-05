#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll F[1000];
void tribo(){
    F[1] = 0;
    F[2] = 0;
    F[3] = 1;
    for(int i=4;i<=50;i++){
        F[i] = F[i-1] + F[i-2] + F[i-3];
    }
}
int main(){
    int n; cin >> n;
    tribo();
    for(int i=1;i<=n;i++){
        cout << F[i] << " ";
    }
}
