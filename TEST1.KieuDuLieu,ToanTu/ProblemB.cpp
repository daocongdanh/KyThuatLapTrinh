#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;
    int dem = 0;
    int check = 0;
    for(int i = 0; i<n;i++){
        char kitu; cin >> kitu;
        if(kitu == 'u' || kitu == 'e' || kitu == 'o' || kitu == 'a' || kitu == 'i'){
            dem++;
            check =1;
        }
        if(kitu == 'U' || kitu == 'E' || kitu == 'O' || kitu == 'A' || kitu == 'I'){
            dem++;
            check =1;
        }
    }
    if(check == 0) cout << "NONE";
    else cout << dem;
}
