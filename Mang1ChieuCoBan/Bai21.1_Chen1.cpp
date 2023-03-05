#include <stdio.h>
#include <math.h>
void chen(int a[],int n,int x,int k){
    for(int i=n+1;i>=k;i--){
        a[i]=a[i-1];
        if(i==k) a[i]=x;
    }
    for(int i=1;i<=n+1;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n; scanf("%d",&n);
    int x,k; scanf("%d%d",&x,&k);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    chen(a,n,x,k);
}
