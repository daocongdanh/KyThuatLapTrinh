#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <int> v;
    while(n--){
        int t; cin >> t;
        if(t==1){
            int x; cin >> x;
            v.push_back(x);
        }
        else if(t==2){
            if(!v.empty()){
                v.pop_back();
            }
        }
    }
    if(v.empty()) cout << "EMPTY" << endl;
    else{
        for(auto x : v){
            cout << x << " ";
        }
    }
}
