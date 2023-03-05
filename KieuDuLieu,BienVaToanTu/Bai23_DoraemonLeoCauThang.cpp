#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int sobuoc;
    if(n < m){
        cout << "-1";
    }
    else{
        if(n % 2 ==0 ){
            sobuoc = n/2;
        }
        else{
            sobuoc = n/2 + 1;
        }
        sobuoc = (sobuoc+m-1)/m*m;//so buoc thoa dieu kien
        cout << sobuoc << endl;
    }
}
