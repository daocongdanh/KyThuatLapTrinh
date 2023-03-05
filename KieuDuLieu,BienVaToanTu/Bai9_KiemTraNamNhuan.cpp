#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    if(n%400 ==0 ||(n%4==0 && n%100!=0)) cout<<"YES\n";
    else cout<<"NO";
}
