#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int giao[10000001], hop[10000001], g=0, h=0;
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            hop[h++] = a[i++];
            giao[g++] = b[j++];
        }
        else if(a[i] < b[j]){
            hop[h++] = a[i++];
        }
        else hop[h++] = b[j++];
    }
    while(i<n) hop[h++] = a[i++];
    while(j<m) hop[h++] = b[j++];
    for(int i=0;i<h;i++) cout << hop[i] << " ";
    cout << endl;
    for(int i=0;i<g;i++) cout << giao[i] << " ";
}
