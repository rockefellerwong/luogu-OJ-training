#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, m = 1, ans = 0;
    scanf("%d%d", &n, &x);

    while (m <= n) {
        int a = n / (m * 10), b = (n / m) % 10, c = n % m;
        if (x != 0) {
            if (b > x) ans += (a + 1) * m;
            else if (b == x) ans += a * m + c + 1;
            else ans += a * m;
        }

        else {
            if (b != 0) ans += a * m;
            else ans += (a - 1) * m + c + 1;
        }

        m *= 10;
    }

    printf("%d\n", ans);
    return 0;
}