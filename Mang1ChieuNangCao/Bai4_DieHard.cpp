#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int tien25 = 0, tien50 = 0;
    for(int i=0;i<n;i++){
        if(a[i]==25) tien25++;
        else if(a[i]==50){
            if(tien25==0){
                cout << "NO";
                return 0;
            }
            else{
                tien50++;
                tien25--;
            }
        }
        else{
            if(tien25==0 || tien25*25 + tien50*50 < 75){
                cout << "NO";
                return 0;
            }
            else if(tien50>=1){
                tien50--;
                tien25 -= 2;
            }
            else tien25 -=3;
        }
    }
    cout << "YES";
}

