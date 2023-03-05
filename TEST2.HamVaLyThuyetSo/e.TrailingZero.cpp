#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int n){
    while(n>=10){
        int r = n%10;
        if(((r - (n/10)%10) != 1) && ((r - (n/10)%10) !=-1)) return 0;
        n/=10;
    }
    return 1;
}
int pt(int n){
    int dem = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                if(i==5){
                    dem++;
                }
                n/=i;
            }
        }
    }
    if(n!=1 && n==5) dem++;
    return dem;
}
int main(){
    int n; cin >> n;
    int a[n];
    int res = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 0){
        	cout << 1 << endl;
        	return 0;
		}
    }
    for(int i=0;i<n;i++){
        res += pt(a[i]);
    }
    cout <<res;
}
