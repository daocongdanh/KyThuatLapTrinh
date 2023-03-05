#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int Max = a[0];
    cout << a[0] << " ";
    for(int i=1;i<n;i++){
        if(a[i] > Max){
            cout << a[i] << " ";
            Max = a[i];
        }
    }
}

