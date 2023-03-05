#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        cout << i <<" ";
    }
    cout <<endl;
    for(int i=n;i>=0;i--){
        cout <<i <<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            cout << i <<" ";
        }
    }
    cout <<endl;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            cout << i <<" ";
        }
    }
    cout <<endl;
    for(int i=0;i<n;i++){
        if(i%4==0) cout << i <<" ";
    }
    cout<<endl;
    char kitu = 97;
    for(int i=1;i<=n;i++){
        cout<<kitu<<" ";
        kitu++;
    }
    cout <<endl;
    char kitu1 = 122-n+1;
    for(int i=1;i<=n;i++){
        cout<<kitu1<<" ";
        kitu1++;
    }
    cout <<endl;
}
