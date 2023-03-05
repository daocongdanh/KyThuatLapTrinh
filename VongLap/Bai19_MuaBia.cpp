#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int tong=n/28;
    int biadu=tong;
    while(biadu>=3){
        tong+=biadu/3;
        biadu = biadu%3 + biadu/3;
    }
    cout<<tong;
}
