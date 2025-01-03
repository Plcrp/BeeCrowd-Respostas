#include <stdio.h>

int main() {

    int d = 0;
    int h = 0;
    int m = 0;
    int s = 0;
    int time1 = 0;

    int d2 = 0;
    int h2 = 0;
    int m2 = 0;
    int s2 = 0;
    int time2 = 0;

    int totalTime = 0;

    scanf("Dia %d",&d);
    scanf("%d : %d : %d",&h,&m,&s);

    while(getchar() != '\n');

    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    time1 = d * 86400 + h * 3600 + m * 60 + s;
    time2 = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    totalTime = time2 - time1;

    d = totalTime / 86400;
    totalTime %= 86400;

    h = totalTime / 3600;
    totalTime %= 3600;

    m = totalTime / 60;
    s = totalTime % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);

    return 0;
}
