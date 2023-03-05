#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    long long sum=0;
    for(int i=0;i<=n;i+=3){
        sum+=i;
    }
    cout<<sum;
}
