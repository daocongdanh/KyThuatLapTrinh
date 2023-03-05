#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    multiset <int> ms;
    int l = 0, r;
    int Max = 0;
    for(r=0;r<n;r++){
        ms.insert(a[r]);
        while(*ms.rbegin() - *ms.begin() > k){
            ms.erase(ms.find(a[l]));
            l++;
        }
        if(ms.size() > Max) Max = ms.size();
    }
    cout << Max;
}
