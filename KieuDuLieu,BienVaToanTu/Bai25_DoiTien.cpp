#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout << n/100 + (n%100)/20 + ((n%100)%20)/10 + (((n%100)%20)%10)/5 + ((((n%100)%20)%10)%5);
}
