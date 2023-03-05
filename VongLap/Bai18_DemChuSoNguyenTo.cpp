#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
bool nt(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    long long n;
    cin>>n;
    int dem=0;
    while(n){
        if(nt(n%10)){
            dem++;
        }
        n/=10;
    }
    cout<<dem;
}
