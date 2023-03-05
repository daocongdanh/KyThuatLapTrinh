#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],x;
    int max=0,min=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]>x) max++;
        if(a[i]<x) min++;
    }
    printf("%d\n",min);
    printf("%d",max);
}
