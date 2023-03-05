#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n,u1,d;
    cin>>n>>u1>>d;
    cout<< 1ll*n*u1 +1ll*n*(n-1)/2*d;
}
