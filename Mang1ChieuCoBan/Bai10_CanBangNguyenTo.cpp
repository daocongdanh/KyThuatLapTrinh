#include <stdio.h>
#include <math.h>
int nt(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
void canbang(int a[],int n){
    for(int i=0;i<n;i++){
        long long l=0,r=0;
        for(int j=0;j<n;j++){
            if(j<i) l+=a[j];
            if(j>i) r+=a[j];
        }
        if(nt(l) && nt(r)) printf("%d ",i);
    }
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    canbang(a,n);
}
