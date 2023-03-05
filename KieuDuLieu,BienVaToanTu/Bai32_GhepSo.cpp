#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int k2 , k3 , k5 , k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long tong = 0;
    int k256 = min({k2 , k5 , k6});
    tong += 1ll * k256 * 256;
    k2 -= k256 , k5 -= k256 , k6 -= k256;
    long long k32 = min(k2 , k3);
    tong += 1ll * k32 * 32;
    cout << tong << endl;
}
