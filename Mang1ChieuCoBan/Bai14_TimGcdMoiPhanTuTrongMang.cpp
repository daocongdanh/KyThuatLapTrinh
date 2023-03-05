#include <stdio.h>
#include <math.h>
long long gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
long long arrgcd(int a[],int n){
    int uoc=0;
    for(int i=0;i<n;i++){
        uoc=gcd(uoc,a[i]);
    }
    return uoc;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%lld",arrgcd(a,n));
}
