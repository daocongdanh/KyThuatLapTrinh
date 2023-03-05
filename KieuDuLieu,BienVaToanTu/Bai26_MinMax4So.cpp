#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max({a,b,c,d})<<" "<<min({a,b,c,d});
}
