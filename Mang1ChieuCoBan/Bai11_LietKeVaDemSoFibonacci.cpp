#include <stdio.h>
#include <math.h>
long long F[100];//luu lai cac so fibi tu 0->92;
void ktao(){
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
int checkfb(long long n){
    for(int i=0;i<=92;i++){
        if(n==F[i]) return 1;
    }
    return 0;
}
int main(){
    ktao();
    int n; scanf("%d",&n);
    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int check=0;
    for(int i=0;i<n;i++){
        if(checkfb(a[i])){
            check=1;
            printf("%lld ",a[i]);
        }
    }
    if(check==0) printf("NONE");
}
