#include <stdio.h>
#include <math.h>
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int tn(int n){
    int m=n;
    int cnt=0;
    while(n){
        cnt = cnt*10+n%10;
        n/=10;
    }
    return cnt==m;
}
int cp(long long n){
    int can=sqrt(n);
    if(1ll*can*can==n) return 1;
    return 0;
}
int check(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return nt(sum)==1;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    int nguyento=0;
    int thuannghich=0;
    int chinhphuong=0;
    int tong =0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(nt(a[i])) nguyento++;
        if(tn(a[i])) thuannghich++;
        if(cp(a[i])) chinhphuong++;
        if(check(a[i])) tong++;
    }
    printf("%d\n%d\n%d\n%d\n",nguyento,thuannghich,chinhphuong,tong);
}
