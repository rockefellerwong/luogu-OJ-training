#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, q, i, j, s = 1, maxx = 0;
	cin >> n >> q;
	for(i = 2; i <= n; i++) {
		cin >> j;
		if(q < j && j - q == 1) s++;
		else s = 1;
		if(s > maxx) maxx = s;
		q = j;
	}
	cout << maxx;
	return 0;
}