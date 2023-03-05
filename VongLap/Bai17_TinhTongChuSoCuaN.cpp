#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int dem=0;
    while(n){
        dem+=n%10;
        n/=10;
    }
    cout<<dem;
}
