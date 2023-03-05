#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<2){
        cout<<"-1";
    }
    else{
        cout<<n/2<<endl;
        while(n>1){
            if(n==3){
                cout<<"3"<<" ";
            }
            else cout<<"2"<<" ";
            n-=2;
        }
    }
}
