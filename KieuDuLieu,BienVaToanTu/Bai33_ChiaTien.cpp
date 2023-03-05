#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a , b , c , n;
    cin >> a >> b >> c >> n;
    int tien = (a + b + c + n);
    if(tien % 3== 0){
        if(tien / 3 >= a && tien / 3 >= b && tien / 3 >= c){
            cout << "YES";
        }
        else cout << "NO";
    }
    else cout << "NO";
}
