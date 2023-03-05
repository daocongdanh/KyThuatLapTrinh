#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a , b , k;
    cin >> a >> b >> k;
    long long phai , trai;
    if(k % 2 == 0 ){
        phai = 1ll * k / 2 * a;
        trai = 1ll * - k / 2 * b;
    }
    else{
        phai = 1ll * (k  - k / 2) * a;
        trai = 1ll * - k / 2 * b;
    }
    cout << phai + trai << endl;
}
