#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int dem=0;
    if(n==0){
        dem=1;
    }
    else{
        while(n){
            dem++;
            n/=10;
        }
    }
    cout<<dem;
}
