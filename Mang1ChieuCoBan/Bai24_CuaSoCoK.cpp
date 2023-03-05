#include <stdio.h>
#include <math.h>
void daycon(int a[],int n,int k){
    int temp=n-k;
    for(int i=0;i<=temp;i++){
        int cnt=0;
        for(int j=i;j<k;j++){
            cnt+=a[j];
        }
        k++;
        printf("%d ",cnt);
    }
    
}
    
int main(){
    int n; scanf("%d",&n);
    int a[n],k; scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    daycon(a,n,k);
}
