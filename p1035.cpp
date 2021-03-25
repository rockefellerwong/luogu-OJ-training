#include <bits/stdc++.h>
using namespace std;

const double euler = 0.5772156649;
int main() {
    int k, n = 0;
    scanf("%d", &k);

    n = exp(k - euler) + 0.5;
    
    printf("%d\n", n);
    return 0;
}