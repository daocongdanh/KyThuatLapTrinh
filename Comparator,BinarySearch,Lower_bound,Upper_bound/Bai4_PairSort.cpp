#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair <int,int> a, pair <int,int> b){
    double x = sqrt(a.first * a.first + a.second * a.second);
    double y = sqrt(b.first * b.first + b.second * b.second);
    if(x != y){
        return x < y;
    }
    else{
        if(a.first != b.first){
            return a.first < b.first;
        }
        else{
            return a.second < b.second;
        }
    }
}
int main(){
    int n; cin >> n;
    pair <int,int> a[n];
    for(int i=0;i<n;i++){
        int x, y; cin >> x >> y;
        a[i] = make_pair(x,y);
    }
    sort(a, a + n, cmp);
    for(auto x : a){
        cout << x.first << " " << x.second << endl;
    }
}
