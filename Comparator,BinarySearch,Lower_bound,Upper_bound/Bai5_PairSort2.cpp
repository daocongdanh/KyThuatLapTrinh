#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        if(a.second.first != b.second.first){
            return a.second.first < b.second.first;
        }
        else return a.second.second < b.second.second;
    }
}
int main(){
    int n; cin >> n;
    pair <int, pair<int,int>> p[n];
    for(int i=0;i<n;i++){
        cin >> p[i].first >> p[i].second.first >> p[i].second.second;
    }
    sort(p, p+n, cmp);
    for(auto it : p){
        cout << it.first << " ";
        cout << it.second.first << " " << it.second.second << endl;
    }
}
