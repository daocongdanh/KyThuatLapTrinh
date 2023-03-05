#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<1ll*a*b<<endl;
    if(b!=0){
        cout<<fixed<<setprecision(4)<<1.0*a/b;
    }
    else cout<<"INVALID";
}
