#include <stdio.h>
#include <math.h>
int cnt[10000];
int ans=0;
void lienke(int a[],int n){
    for(int i=0;i<n;i++){
        if(i==0){
            if(a[i]>0){
                if(a[i+1]<0) cnt[ans++]=a[i];
            }
            else{
                if(a[i+1]>0) cnt[ans++]=a[i];
            }
        }
        else if(i==n-1){
            if(a[i]>0){
                if(a[i-1]<0) cnt[ans++]=a[i];
            }
            else{
                if(a[i-1]>0) cnt[ans++]=a[i];
            }
        }
        else{
            if(a[i]>0){
                if(a[i+1]<0 || a[i-1]<0) cnt[ans++]=a[i];
            }
            else{
                if(a[i+1]>0 || a[i-1]>0) cnt[ans++]=a[i];
            }
        }
    }
    for(int i=0;i<ans;i++){
        printf("%d ",cnt[i]);
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
