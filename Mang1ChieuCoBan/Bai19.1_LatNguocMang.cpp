#include <stdio.h>
#include <math.h>
void latnguoc(int a[],int n){
    int l=0,r=n-1;
    int temp;
    while(l<=r){//ki thuat 2 con tro
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++,r--;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    latnguoc(a,n);
}
