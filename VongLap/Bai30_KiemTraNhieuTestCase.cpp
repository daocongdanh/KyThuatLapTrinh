#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x; cin>>x;
        if(x%2==0){
            cout<<"EVEN"<<endl;
        }
        else{
            cout<<"ODD"<<endl;
        }
    }
}
