#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int N = n;
	int nums[N];
	for (int i = 0; i < N; i++) cin >> nums[i];
	int min = nums[0], max = nums[0];
	for (int i = 0; i < N; i++)
		if (nums[i] < min) min = nums[i];
	for (int i = 0; i < N; i++)
		if (nums[i] >= max) max = nums[i];
	int sum = 0;
	for (int i = 0; i < N; i++) sum += nums[i];
	sum -= min + max;
	double ans = sum / (n - 2.0);
	printf("%.2f\n", ans);
	return 0;
}