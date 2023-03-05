#include <stdio.h>
#include <math.h>
void lienke(int a[],int n){
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1])
        printf("%d ",a[i]);
    }
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    lienke(a,n);
}
