#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];
    a[n] = a[n-1];
    int dem = 1, max = 0, pos = 0;
    ll sum = a[0], summax;
    for(int i=1;i<=n;i++){
        if(a[i] != a[i-1]){
            dem++;
            sum += a[i];
        }
        else{
            if(dem > max){
                max = dem;
                pos = i;
                summax = sum;
            }
            else if(dem==max){
                if(sum > summax){
                    summax = sum;
                    pos = i;
                }
            }
            dem = 1, sum = a[i];
        }
    }
    cout << max << endl;
    for(int i=max-1;i>=0;i--){
        cout << a[pos-i-1] << " ";
    }
}
