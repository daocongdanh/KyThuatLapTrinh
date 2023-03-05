#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int chan = 0, le = 0;
    int n;
    while(cin >> n){
        if(n%2==0) chan ++;
        else le++;
    }
    if(chan > le) cout << "CHAN";
    else if(chan < le) cout << "LE";
    else cout << "CHANLE";
}
