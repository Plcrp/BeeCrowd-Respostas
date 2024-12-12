#include <stdio.h>

int main() {

    int a = 0;
    int b = 0;
    int q = 0;
    int r = 0;
    // a = bq + r
    scanf("%d",&a);
    scanf("%d",&b);

    q = a / b;
    r = a % b;

    if (r < 0) {
        if (b > 0) {
            r += b;
            q -= 1;
        } else {
            r -= b;
            q += 1;
        }
    }

    printf("%d %d\n",q,r);

    return 0;
}
