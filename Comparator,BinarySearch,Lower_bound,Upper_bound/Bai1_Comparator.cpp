#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int digit_chan(int n){
    int sum = 0;
    while(n){
        int r = n%10;
        if(r%2 == 0) sum++;
        n /= 10;
    }
    return sum;
}
int digit_le(int n){
    int sum = 0;
    while(n){
        int r = n%10;
        if(r%2 == 1) sum++;
        n /= 10;
    }
    return sum;
}
bool cmp1(int a, int b){
    int chan1 = digit_chan(a), chan2 = digit_chan(b);
    if(chan1 != chan2){
        return chan1 < chan2;
    }
    else{
        return a < b;
    }
}
bool cmp2(int a, int b){
    int le1 = digit_le(a), le2 = digit_le(b);
    return le1 < le2;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int b[n];
    for(int i=0;i<n;i++) b[i] = a[i];
    sort(a, a+n, cmp1);
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b, b+n,cmp2);
    for(int x : b) cout << x << " ";
}
