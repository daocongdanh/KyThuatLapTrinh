#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n%3==0 && n%5==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n%3==0 && n%7!=0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n%3==0 || n%7==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n>30 && n<50){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n>=30 && (n%2==0 || n%3==0 || n%5==0)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if( n>=10 && n<=99 &&nt(n%10)==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n<=100 && n%23==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n<10 || n>20){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    if(n%10%3==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
