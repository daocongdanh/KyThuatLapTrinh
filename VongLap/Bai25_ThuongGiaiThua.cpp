#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
long long gt(int n){
    if(n==1 || n==0) return 1;
    return n*gt(n-1);
}
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=1.0/gt(i);
    }
    cout<<fixed<<setprecision(4)<<sum;
}
