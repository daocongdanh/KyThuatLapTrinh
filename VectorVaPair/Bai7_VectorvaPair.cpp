#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    pair <int,int> p[n];
    vector <double> v;
    for(int i=0;i<n;i++){
        int x, y; cin >> x >> y;
        p[i] = make_pair(x,y);
    }
    for(auto x : p){
        v.push_back(sqrt(x.first * x.first + x.second * x.second));
    }
    for(double x : v){
        cout << fixed << setprecision(2) << x << " ";
    }
}
