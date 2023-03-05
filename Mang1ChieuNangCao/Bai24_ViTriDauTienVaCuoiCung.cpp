#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    int a[n];
    for(int i=1;i<=n;i++) cin >> a[i];
    int idx1 = -1, idx2 = -1;
    for(int i=1;i<=n;i++){
        if(a[i] == x){
            idx1 = i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==x){
            idx2 = i;
        }
    }
    cout << idx1 << " " << idx2 << endl;
}
