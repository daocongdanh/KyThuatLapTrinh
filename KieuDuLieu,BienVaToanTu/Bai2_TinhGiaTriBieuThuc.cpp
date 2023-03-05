#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout << 1ll*a*(b+c) + 1ll*b*(a+c);
}
