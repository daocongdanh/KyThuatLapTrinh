#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    long long tong=0,tich=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        tong+=a[i];
        tich*=a[i];
        tong=tong % (int)(1e9+7);
        tich=tich % (int)(1e9+7);
    }
    printf("%lld\n%lld",tong,tich);
}
