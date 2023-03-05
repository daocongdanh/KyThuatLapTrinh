#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    int c=0,l=0,tc=0,tl=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
            tc+=a[i];
        }
        else{
            l++;
            tl+=a[i];
        }
    }
    printf("%d\n",c);
    printf("%d\n",l);
    printf("%d\n",tc);
    printf("%d",tl);
}
