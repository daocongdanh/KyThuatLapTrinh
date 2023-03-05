#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0, max = 0;
    int pos;
    for(int i=0;i<k;i++){
        sum += a[i];
    }
    if(sum > max){
        max = sum;
        pos = k-1;
    }
    for(int i=k;i<n;i++){
        sum -= a[i-k];
        sum += a[i];
        if(sum > max){
            max = sum;
            pos = i;
        }
    }
    cout << max << endl;
    for(int i=k-1;i>=0;i--){
        cout << a[pos - i] << " ";
    }
}
