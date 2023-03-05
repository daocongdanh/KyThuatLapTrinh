#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int w;
    float h;
    cin>>w>>h;
    h=1.0*h/100;
    float BMI = w/(h*h);
    if(BMI<18.5){
        cout<<"Under weight";
    }
    else if(BMI>=18.5 && BMI<25){
        cout<<"Normal";
    }
    else if(BMI>=25 && BMI<30){
        cout<<"Over weight";
    }
    else if(BMI>=30 && BMI<35){
        cout<<"Obesity 1";
    }
    else if(BMI>=35 && BMI<40){
        cout<<"Obesity 2";
    }
    else{
        cout<<"Extreme obesity";
    }
}
