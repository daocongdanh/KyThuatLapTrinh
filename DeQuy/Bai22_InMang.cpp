#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in1(int a[], int l, int r){
    if(l>r) return;
    else{
        in1(a,l,r-1);
        cout << a[r] << " ";
    }
}
void in2(int a[], int l, int r){
    if(l>r) return ;
    else{
        cout << a[r] << " ";
        in2(a,l,r-1);
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    in1(a,0,n-1);
    cout << endl;
    in2(a,0,n-1);
}
