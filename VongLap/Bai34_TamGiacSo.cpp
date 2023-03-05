#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        //truoc khi in ra so la no in ra dau cach
        for(int j = 1; j <= 2 * (n - i); j++){
            cout << " ";
        }
        int dem = i;
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j < i){
                cout << dem << ' '; ++dem;
            }
            else{
                cout << dem << ' '; --dem;
            }
        }
        cout << endl;
    }
    return 0;
}

