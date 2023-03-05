#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=1;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum*=i;
            if(i != n/i){
                sum*=n/i;
            }
        }
    }
    cout<<sum;
}
