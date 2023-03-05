#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i==n-j+1){
                cout<<i<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}
