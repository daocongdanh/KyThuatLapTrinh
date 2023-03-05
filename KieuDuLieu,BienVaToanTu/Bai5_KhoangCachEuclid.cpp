#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout << fixed << setprecision(2) << sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
