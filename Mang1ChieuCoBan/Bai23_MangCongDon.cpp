#include <stdio.h>
#include <math.h>
int F[1000];
void congdon(int a[],int n){
    for(int i=0;i<n;i++){
        F[0]=a[0];
        F[i]=F[i-1] + a[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",F[i]);
    }
}
    
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    congdon(a,n);
}
