#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=n/b;j++){
            if(a*i+b*j==n){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
