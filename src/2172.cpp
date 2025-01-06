#include <stdio.h>

int main(){

    int x = 1;
    long long m = 1;

    while(scanf("%d %lld",&x,&m) && x != 0 && m != 0){
        printf("%lld\n",x*m);
    }

    return 0;
}