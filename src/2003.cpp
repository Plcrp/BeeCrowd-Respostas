#include <stdio.h>

int main(){

    int h,m;
    int max = 0;

    while(scanf("%d:%d",&h,&m) > 0){
        if(h*60 + m + 60 < 8 * 60){
            max = 0;
        } else{
            max = ((h*60)+m+60) - (8*60) ;
        }

        printf("Atraso maximo: %d\n",max);
        }

    return 0;

    }