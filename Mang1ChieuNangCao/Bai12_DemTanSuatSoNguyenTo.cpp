#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n;
    int a[100001], idx = 0;
    map <int,int> mp;
    while(cin >> n){
        a[idx++] = n;
    }
    for(int i=0;i<idx;i++){
        if(nt(a[i])) mp[a[i]]++;
    }
    for(int i=0;i<idx;i++){
        if(mp[a[i]]!=0){
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]]=0;
        }
    }
}
