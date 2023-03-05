#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int l, r; cin >> l >> r;
    for(auto it = v.begin() + l ; it != v.end() ; it++){
        cout << *it << " ";
        if(it == v.begin() + r) break;
    }
    cout << endl;
    for(auto it = v.begin() + r ; it != v.end() ; it--){
        cout << *it << " ";
        if(it == v.begin() + l) break;
    }
}
