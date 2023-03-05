#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    long long s; cin >> s;
    if(s%n == 0){
        cout << s/n;
    }
    else cout << s/n + 1;
}
