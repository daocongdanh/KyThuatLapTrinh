#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    char kitu;
    cin>>kitu;
    if(kitu >=65 && kitu<=90){
        cout<<"UPPER";
    }
    else if(kitu>=97 && kitu<=122){
        cout<<"LOWER";
    }
    else if(kitu>=48 && kitu<=57){
        cout<<"DIGIT";
    }
    else{
        cout<<"SPECIAL";
    }
}
