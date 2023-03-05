#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a1 , a2 , a3 , b1 , b2 , b3 , n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int cup = a1 + a2 + a3;
    int huychuong = b1 + b2 + b3;
    int kecup, kehuychuong;
    if(cup % 5 ==0) kecup = cup / 5;
    else kecup = cup / 5 + 1;
    if(huychuong % 10 ==0) kehuychuong = huychuong / 10;
    else kehuychuong = huychuong / 10 + 1;
    if(kecup + kehuychuong <= n) cout << "YES";
    else cout << "NO";
}
