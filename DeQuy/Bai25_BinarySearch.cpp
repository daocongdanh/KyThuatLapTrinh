#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binary_search(int a[], int l, int r,int x){
    if(l>r) return 0;
    else{
        int m = (l+r)/2;
        if(a[m] == x) return 1;
        else if(a[m] > x) return binary_search(a,l+1,r,x);
        else return binary_search(a,l,r-1,x);
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int x; cin >> x;
    cout << binary_search(a,0,n-1,x);
}
