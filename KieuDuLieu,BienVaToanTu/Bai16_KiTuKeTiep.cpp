#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    char kitu;
    cin>>kitu;
    if(kitu >= 65 && kitu <90){
        kitu+=33;
    }
    else if(kitu==90){
        kitu+=7;
    }
    else if(kitu >=97 && kitu<122){
        kitu +=1;
    }
    else if(kitu==122){
        kitu-=25;
    }
    cout<<kitu;
}
