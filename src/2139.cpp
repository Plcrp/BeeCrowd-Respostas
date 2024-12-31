#include <stdio.h>

int main(){

    int md[13]  {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int d = 0;
    int m = 0;
    int daycount = 0;

    while(scanf("%d %d",&m,&d) == 2){
        daycount = 0;
        if(d == 25 && m == 12){
            printf("E natal!\n");
            continue;
        }
        if(d == 24 && m == 12){
            printf("E vespera de natal!\n");
            continue;
        }
        if(m == 12 && d > 25){
            printf("Ja passou!\n");
            continue;
        }
        for(int i = 0 ; i < m; i++){
            daycount += md[i];
        }
        printf("Faltam %d dias para o natal!\n",360-(daycount+d));
    }

    return 0;

}