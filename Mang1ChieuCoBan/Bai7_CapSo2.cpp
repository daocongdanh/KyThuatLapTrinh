#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],min=1e9;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int res=abs(a[i]-a[j]);
            if(res<min && i!=j) min=res;
        }
    }
    printf("%d",min);    
}
