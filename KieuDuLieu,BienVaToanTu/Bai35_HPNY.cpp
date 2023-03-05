#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int h , m;
    cin >> h >> m;
    cout << (23 - h) * 60 + 60 - m;
}
