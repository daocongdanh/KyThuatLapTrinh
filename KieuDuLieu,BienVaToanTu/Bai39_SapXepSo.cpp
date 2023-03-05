#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int l = min({a,b,c});
    int r = max({a,b,c});
    int m = a + b + c - l - r;
    cout<<l<<" "<<m<<" "<<r; 
}
