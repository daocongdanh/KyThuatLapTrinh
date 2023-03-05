#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int h, m, k;
    cin >> h >> m >> k;
    if(k + m >= 28){
        h = (k + m) / 28 + h;
        m = (k + m) - (k + m ) / 28 * 28;
        if(h >= 28){
             h = h % 28;
        }
    }
    else m = m + k;
    cout << setfill('0') << setw(2) << h << "h:" << setfill('0') << setw(2) << m << "m";
}
