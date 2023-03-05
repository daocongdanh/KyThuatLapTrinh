#include <bits/stdc++.h>
using namespace std;
long long gt(int n){
    if(n == 1 || n == 0) return 1;
    return n*gt(n-1);
}
int c1(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0) return 0;
    }
    return n>1;
}
void c2(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    cout << tong << endl;
}
void c3(int n){
    int tong = 0;
    while(n){
        int div = n%10;
        if(div % 2 ==0){
            tong += div;
        }
        n/=10;
    }
    cout << tong << endl;
}
void c4(int n){
    int tong = 0;
    while(n){
        int div = n%10;
        if(c1(div)){
            tong += div;
        }
        n/=10;
    }
    cout << tong << endl;
}
void c5(int n){
    int cnt = 0;
    while(n){
        cnt = cnt*10 + n%10;
        n/=10;
    }
    cout << cnt << endl;
}
void c6(int n){
    int dem = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            dem ++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) dem++;
    cout << dem << endl;
}
void c7(int n){
    int res;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            res=i;
            n/=i;
        }
    }
    if(n!=1) res = n;
    cout << res << endl;
}
int c8(int n){
    while(n){
        if(n%10 == 6) return 1;
        n/=10;
    }
    return 0;
}
int c9(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    return tong % 8 == 0;
}
void c10(int n){
    long long tong = 0;
    while(n){
        tong += gt(n%10);
        n/=10;
    }
    cout << tong << endl;
}
int c11(int n){
    int m = n%10;
    while(n){
        if(n%10 != m) return 0;
        n/=10;
    }
    return 1;
}
int c12(int n){
    while(n>=10){
        int div = n%10;
        if(div < (n/10)%10) return 0;
        n/=10;
    }
    return 1;
}
void c13(int n){
    int m=n;
    int dem=0;
    while(n){
        dem++;
        n/=10;
    }
    long long tong = 0;
    while(m){
        tong += 1ll*pow(m%10,dem);
        m/=10;
    }
    cout << tong << endl;
}
int main(){
    int n;
    cin >> n;
    cout << c1(n) << endl;
    c2(n);
    c3(n);
    c4(n);
    c5(n);
    c6(n);
    c7(n);
    cout << c8(n) << endl;
    cout << c9(n) << endl;
    c10(n);
    cout << c11(n) << endl;
    cout << c12(n) << endl;
    c13(n);
}
