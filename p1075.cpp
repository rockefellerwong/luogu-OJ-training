#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int lo = floor(sqrt(n));
	if (lo % 2 == 0) lo++;
	int hi = n / 2;
	for (int i = lo; i <= hi; i += 2) {
		if(n % i == 0) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}