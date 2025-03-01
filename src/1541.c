#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    double p;
    double n;

    while(scanf("%d %d %d",&a,&b,&c) != 0 && a != 0){
        p = (double)c/100;
        n = (int)(a*b)/p;
        printf("%d\n",(int)sqrt(n));
    }

    return 0;
}
