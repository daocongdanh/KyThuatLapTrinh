#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    char x;
    cin>>a>>b>>x;
    switch(x){
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '/':
            cout<<a<<" / "<<b<<" = "<<fixed<<setprecision(2)<<1.0*a/b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '%':
            cout<<a<<" % "<<b<<" = "<<a%b;
            break;
    }
}
