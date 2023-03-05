#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    char kitu;
    int demkt = 0, demC = 0;
    for(int i = 0; i < n; i++){
        cin >> kitu;
        if(kitu == 'C'){
            demC++;
        }
        if(kitu == '+'){
            demkt++;
        }
    }
    if(demC >= 1 && demkt >= 2){
        cout << "YES";
    }
    else cout << "NO";
}
