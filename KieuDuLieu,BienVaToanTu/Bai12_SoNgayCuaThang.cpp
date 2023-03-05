#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int t,n;
    cin>>t>>n;
    if(t>=1 && t<=12 && n>0){
        switch(t){
            case 1: case 3: case 5: case 7: case 8 : case 10 : case 12 :
                cout<<"31";
                break;
            case 4: case 6 : case 9 : case 11:
                cout<<"30";
                break;
            case 2:
                if(n%400==0 ||(n%4==0 && n%100!=0)){
                    cout<<"29";
                }
                else cout<<"28";
                break;
        }
    }
    else cout<<"INVALID";
}
