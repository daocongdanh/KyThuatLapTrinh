#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    char kitu;
    int sum=0;
    int dem=0;
    while(cin>>kitu){
        if(kitu>=48 && kitu<=57){
            sum+= kitu - '0';
        }
        if(kitu>=65 && kitu<=90 || kitu>=97 && kitu<=122){
            dem++;
        }
    }
    cout<<dem<<endl<<sum;
}
