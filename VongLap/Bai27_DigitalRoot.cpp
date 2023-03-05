#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
        if(n==0){
            if(sum<10){
                break;
            }
            n=sum;
            sum=0;
        }
    }
    cout<<sum;
}
