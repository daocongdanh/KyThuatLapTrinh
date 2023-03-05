#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    int ok=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0 && a[i]%2==0){
            printf("%d ",a[i]);
            ok=1;
        }
    }
    if(ok==0) printf("NONE");
}
