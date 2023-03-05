#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int m,n,a; scanf("%d%d%d",&m,&n,&a);
    if(m%a==0){
        if(n%a==0) printf("%lld",1ll*(m/a)*(n/a));
        else printf("%lld",1ll*(m/a)*(n/a+1));
    }
    else{
        if(n%a==0) printf("%lld",1ll*(m/a+1)*(n/a));
        else printf("%lld",1ll*(m/a+1)*(n/a+1));
    }
}
