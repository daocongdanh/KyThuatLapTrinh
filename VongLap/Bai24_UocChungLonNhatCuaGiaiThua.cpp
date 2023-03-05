#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
long long gt(long long n){
    if(n==1) return 1;
    return n*gt(n-1);
}
int main(){
    long long a,b;
    cin>>a>>b;
    if(a==0 || b==0){
        cout<<"1";
    }
    else cout<<gt(min(a,b));
}
