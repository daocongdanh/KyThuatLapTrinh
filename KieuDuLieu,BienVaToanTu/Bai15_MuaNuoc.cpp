#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int a , b;
    cin >> a >> b;
    long long c1 , c2;
    c1 = n * a;
    if(n % 2 == 0){
        c2 = n/2 * b;
    }
    else c2 = n/2 * b + a;
    cout << min(c1 , c2) <<endl;
}
