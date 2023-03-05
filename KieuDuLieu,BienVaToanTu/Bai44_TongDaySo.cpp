#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum1=0;
    long long sum2=0;
    int dem3=0;
    long long sum4=0;
    for(int i=1;i<=n;i++){
        sum1+=i;
        sum2+=1ll*i*i;
        if(i%3==0){
            dem3++;
            sum4+=i;
        }
    }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<dem3<<endl;
    cout<<sum4<<endl;
}
