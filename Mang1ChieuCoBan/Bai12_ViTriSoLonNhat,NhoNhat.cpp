#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    int max=-1e9,min=1e9,min_pos,max_pos;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){//lay phan tu dau
            max=a[i];
            max_pos=i;
        }
        if(a[i]<=min){//lay phan tu cuoi
            min=a[i];
            min_pos=i;
        }
    }
    printf("%d %d",min_pos,max_pos);
}
