#include <stdio.h>
#include <math.h>
int arrdx(int a[],int n){
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(arrdx(a,n)) printf("YES");
    else printf("NO");
}
