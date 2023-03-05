#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    char kitu;
    cin>>kitu;
    if(kitu >=65 && kitu<=90){
        kitu+=32;
    }
    else if(kitu>=97 && kitu<=122){
        kitu-=32;
    }
    cout<<kitu;
}
