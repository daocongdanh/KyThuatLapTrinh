#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
long long gt(int n){
    if(n==1) return 1;
    return n*gt(n-1);
}
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=gt(i);
    }
    cout<<sum;
}
