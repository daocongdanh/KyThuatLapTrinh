#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >>a>>b>>c;
    if(a==0 || b==0 || c==0){
        cout<<"INVALID";
    }
    else{
        if(a==b && b==c && a==c){
        cout <<"1";
        }
        else if(a==b || a==c || b==c){
            cout <<"2";
        }
        else if(a*a+b*b==c*c ||a*a+c*c==b*c || c*c+b*b==a*a ){
            cout << "3";
        }
        else if((a+b)>c && (b+c)>a && (a+c)>b){
            cout<<"4";
        }
        else cout<<"INVALID";
    }
}
