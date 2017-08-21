#include <stdio.h>
#include <math.h>

int main() {
    int a[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int n, num, rmd, ans; // rmd = rightmost digit
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        rmd = num % 10;
        ans = (int) pow(rmd, num % a[rmd] ? num % a[rmd] : a[rmd]);
        printf("%d\n", ans % 10);
    }
}
