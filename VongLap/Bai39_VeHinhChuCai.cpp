#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    char kitu1 = 'A';
    char kitu2 = 'a';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<char(kitu1+j);
            }
            else{
                cout<<char(kitu2+j);
            }
        }
        kitu1++;
        kitu2++;
        cout<<endl;
    }
}
