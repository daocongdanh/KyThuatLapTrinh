#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;
    for(int i = 0 ;i<=n/11 ;i++){
        for(int j = 0;j<=n/111;j++){
            if(11*i + 111*j == n){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
