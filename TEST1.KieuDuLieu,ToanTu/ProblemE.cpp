#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    if(a==0){
        if(c==0 && b==0) cout << "VO SO NGHIEM";
        else if(b==0) cout << "VO NGHIEM";
        else cout << fixed << setprecision(2) <<1.0*(-c)/b;
    }
    else{
        double delta = b*b - 4*a*c;
        if(delta <0) cout << "VO NGHIEM";
        else if(delta == 0) cout << fixed << setprecision(2) << 1.0*(-b)/(2*a);
        else{
            if(b==0 && c==0) cout <<"0";
            else{
                double x1, x2;
            x2 = (-b + sqrt(delta))/(2*a);
            x1 = (-b - sqrt(delta))/(2*a);
            if(x1<x2){
                cout << fixed << setprecision(2) << x1 << " ";
                cout << fixed << setprecision(2) << x2 << endl;
            }
            else{
                cout << fixed << setprecision(2) << x2 << " ";
                cout << fixed << setprecision(2) << x1 << endl;
            }
            }
        }
    }
}
