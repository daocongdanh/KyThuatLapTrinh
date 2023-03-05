#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x;
bool cmp(int a, int b){
    int x1 = abs(a-x), y1 = abs(b-x);
    if(x1 != y1) return x1 < y1;
    else return a < b;
}
bool comp(int a, int b){
    if(a %2 == 0 && b %2 == 0){
        return a < b;
    }
    else if(a %2 == 1 && b %2 == 1){
        return a > b;
    }
    else if(a %2 == 0 ) return true;
    else return false;
}
int main(){
    int n; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n,cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    sort(a,a+n,comp);
    for(int x : a) cout << x << " ";
}
