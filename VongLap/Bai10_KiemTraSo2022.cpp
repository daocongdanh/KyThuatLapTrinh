#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==2022){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
