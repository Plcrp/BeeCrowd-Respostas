#include <stdio.h>
#include <math.h>

int main(){

    double n = 0;
    scanf("%lf",&n);

    printf("%.1lf %.1lf\n",n/log(n), n/log(n)*1.25506);

    return 0;
}