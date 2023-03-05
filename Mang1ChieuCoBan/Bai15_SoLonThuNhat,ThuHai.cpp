#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int Max1 = 0, Max2;
	for(int x : a){
		if(x > Max1){
			Max2 = Max1;
			Max1 = x;
		}
		else if(x > Max2){
			Max2 = x;
		}
	}
	cout << Max1 << " " << Max2;
}
