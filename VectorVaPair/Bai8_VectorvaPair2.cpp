#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    pair <pair <int,int> , int> p[n];
    vector <int> v;
    for(int i=0;i<n;i++){
        int x, y, z; cin >> x >> y >> z;
        p[i].first = make_pair(x,y);
        p[i].second = z;
    }
    for(auto x : p){
        int sum = x.second + x.first.first + x.first.second;
        v.push_back(sum);
    }
    for(auto x : v) cout << x << " ";
}
