#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float dtb;
    dtb = (a + b + c*2 + d*3)/7;
    if(dtb>=8) cout<<"GIOI";
    else if(dtb>=6.5 && dtb<8) cout<<"KHA";
    else if(dtb>=5 && dtb<6.5) cout<<"TRUNG BINH";
    else cout<<"YEU";
}
