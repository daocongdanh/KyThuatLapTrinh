#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    if(n<500){
        cout<<1ll*n*3300;
    }
    else if(n>=500 && n<800){
        cout<<1ll*n*3700 + 800000;
    }
    else if(n>=800 && n<1000){
        cout<<1ll*n*3900 + 900000;
    }
    else{
        cout<<1ll*n*4500 + 1200000;
    }
}
