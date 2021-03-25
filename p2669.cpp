#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	long long ans = 0;
	scanf("%d", &k);

	int n = 1;
	while (n * (n + 1) < 2 * k) n++;
	n -= 1;
	int rest = n * (n + 1) / 2;
	ans = rest * (2 * n + 1) / 3 + (k - rest) * (n + 1);

	printf("%lld\n", ans);
	return 0;
}