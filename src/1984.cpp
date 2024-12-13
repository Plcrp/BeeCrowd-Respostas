#include <stdio.h>

int main(){

    unsigned long long n = 0;
    int m = 0;

    scanf("%llu",&n);

    while(n != 0){
        m = n%10;
        n /= 10;
        printf("%d",m);
    }
    printf("\n");


    return 0;

}