#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    int dem=0;
    int min=1e9;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<min) min=a[i];
    }
    for(int i=0;i<=n;i++){
        if(a[i]==min) dem++;
    }
    printf("%d",dem);
}
