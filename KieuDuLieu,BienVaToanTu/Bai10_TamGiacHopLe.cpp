#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >>a>>b>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout <<"YES";
    }
    else cout <<"NO";
}
