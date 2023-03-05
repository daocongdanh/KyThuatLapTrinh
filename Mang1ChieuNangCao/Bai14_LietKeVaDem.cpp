#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool check(int n){
    while(n >= 10){
        int r = n % 10;
        if(r < (n/10)%10) return false;
        n /= 10;
    }
    return true;
}
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else return a.first < b.first;
}
int main() {
    int n;
    map <int,int> mp;
    while(cin >> n){
        if(check(n)){
            mp[n]++;
        }
    }
    pair <int,int> p[mp.size()];
    int i = 0;
    for(auto x : mp){
        p[i] = make_pair(x.first,x.second);
        i++;
    }
    sort(p,p+i,cmp);
    for(auto x : p){
        cout << x.first << " " << x.second << endl;
    }
}
