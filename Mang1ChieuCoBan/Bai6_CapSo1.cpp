#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],k,dem=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k) dem++;
        }
    }
    printf("%d",dem);
}
