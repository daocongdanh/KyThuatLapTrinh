#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int sum(int n){
    int cnt =0;
    while(n){
        cnt += n%10;
        n/=10;
    }
    return cnt;
}
int check(int n){
    int tmp = n;
    int sum1 = sum(n);
    int sum2=0;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            sum2 +=sum(i);
            n/=i;
        }
    }
    if(n!=1) sum2 += sum(n);
    if(tmp == n) return 0;
    return sum1 == sum2;
}
int main(){
    int n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}
