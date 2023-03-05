#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<++dem<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        dem=i;
        for(int j=0;j<n;j++){
            cout<<++dem<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-1-i){
                cout<<i+1;
            }
            else cout<<"~";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int dem=i+1;
        int res=n-1;
        for(int j=0;j<=i;j++){
            cout<<dem<<" ";
            dem+=res;
            res--;
        }
        cout<<endl;
    }
    
}
