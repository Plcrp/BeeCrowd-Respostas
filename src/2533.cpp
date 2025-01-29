#include <stdio.h>

int main(){

    int n,g,h;
    float sum = 0;
    float sumh = 0;

    while(scanf("%d",&n) == 1){
        sum = 0;
        sumh = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d",&g,&h);
            sum += g*h;
            sumh += h;
        }
        sumh *= 100;
        printf("%.4f\n",sum/sumh);
    }

    return 0;

}