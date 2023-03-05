#include <stdio.h>
#include <math.h>
int cnt[1000001];//tat ca phan tu trong mang khai bao ngoai main deu=0
int main(){
    int n; scanf("%d",&n);
    int a[n],max=-1e9;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        //danh dau phan tu a[i] da xuat hien
        cnt[a[i]]++;
        if(a[i]>max) max=a[i];
    }
    for(int i=0;i<=max;i++){
        if(cnt[i]!=0){
            printf("%d %d\n",i,cnt[i]);
        }
        cnt[i]=0;
    }
}
