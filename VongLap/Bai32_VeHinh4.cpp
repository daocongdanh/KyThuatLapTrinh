#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    char kitu='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<kitu<<" ";
        }
        kitu++;
        cout<<endl;
    }
}
