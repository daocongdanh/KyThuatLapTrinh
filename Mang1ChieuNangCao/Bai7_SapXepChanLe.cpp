#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int c[1000001], l[1000001], chan=0, le=0;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) c[chan++] = a[i];
        else l[le++] = a[i];
    }
    sort(c, c + chan);
    sort(l, l + le, greater<int>());
    for(int i=0;i<le;i++) cout << l[i] << " ";
    for(int i=0;i<chan;i++) cout << c[i] << " ";
}

