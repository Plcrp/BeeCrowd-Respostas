#include <stdio.h>

int main(){

    int start_h = 0;
    int start_m = 0;

    int end_h = 0;
    int end_m = 0;

    int start_t = 0;
    int end_t = 0;

    int diff = 0;

    scanf("%d",&start_h);
    scanf("%d",&start_m);
    scanf("%d",&end_h);
    scanf("%d",&end_m);

    start_t = start_h*60 + start_m;
    end_t = end_h*60 + end_m;

    if(end_t <= start_t){
        end_t += 24*60;
    }

    diff = end_t - start_t;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff/60, diff%60);

    return 0;
}
