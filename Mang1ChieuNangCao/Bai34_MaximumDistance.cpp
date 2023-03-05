#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(a[i]) == mp.end()){
            mp[a[i]] = i;//Danh dau vi tri dau tien cua phan tu
        }
    }
    int Max = -1;
    for(int i=0;i<n;i++){
        int val1 = a[i] - k, val2 = a[i] + k;
        if(mp.find(val1) != mp.end()){
            Max = max(Max, i - mp[val1]);
        }
        if(mp.find(val2) != mp.end()){
            Max = max(Max, i - mp[val2]);
        }
    }
    cout << Max << endl;
}
