#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(1ll*b*b==1ll*a*c && 1ll*c*c==1ll*b*d){
        cout<<"YES";
    }
    else cout<<"NO";
}
