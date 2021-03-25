#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) { return false; }

    int revertedNumber = 0;
  
    while (x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
    }
  
    return x == revertedNumber || x == revertedNumber / 10;
}

bool isPrime(int k) {
	if (k == 2) return true;
	if (k % 2 == 0) return false;     
    for (int i = 3; i * i <= k; i += 2) if (k % i == 0) return false;     
    return true;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	int num[12000] = {0};
	int tmp = 0;

	for (int i = 1; i < 100; i++) {
		if (isPalindrome(i)) {
			num[tmp] = i;
			tmp++;
		}
	}

	for (int i = 101; i < 1000; i++) {
		if (isPalindrome(i)) {
			num[tmp] = i;
			tmp++;
		}
	}

	for (int i = 10001; i < 100000; i++) {
		if (isPalindrome(i)) {
			num[tmp] = i;
			tmp++;
		}
	}

	for (int i = 1000001; i < 10000000; i++) {
		if (isPalindrome(i)) {
			num[tmp] = i;
			tmp++;
		}
	}

	for (int i = 1; i < 12000; i++)
		if (num[i] >= a && num[i] <= b && num[i] != 0 && isPrime(num[i])) printf("%d\n", num[i]);
}