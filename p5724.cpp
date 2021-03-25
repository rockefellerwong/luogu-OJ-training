#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  const int N = n;
  int nums[N] = {0};
  for (int i = 0; i < n; i++) cin >> nums[i];
  int min = nums[0], max = nums[0];
  for (int i = 0; i < N; i++) if (nums[i] < min) min = nums[i];
  for (int i = 0; i < N; i++) if (nums[i] >= max) max = nums[i];
  int ans = max - min;
  printf("%d\n", ans);
  return 0;
}
