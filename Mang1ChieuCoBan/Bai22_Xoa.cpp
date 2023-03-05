#include <stdio.h>
#include <math.h>
void xoa(int a[],int n,int x){
    int ok=0;
    int res;
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
            res=i;
            ok=1;
        }
    }
    for(int i=res;i<n-1;i++){
        a[i]=a[i+1];
    }
    if(ok==0) printf("NOT FOUND");
    else {
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
    }
}
    
int main(){
    int n; scanf("%d",&n);
    int x; scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    xoa(a,n,x);
}
