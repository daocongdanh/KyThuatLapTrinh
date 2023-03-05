#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, chan = 0, le = 0;
    while(cin >> n){
        if(n%2==0) chan++;
        else le++;
    }
    if((chan > le && (chan + le) % 2==0) ||(chan < le) && (chan + le)%2==1) cout << "YES";
    else cout << "NO";
}
