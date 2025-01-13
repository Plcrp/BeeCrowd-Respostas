#include <stdio.h>
#include <math.h>

int main(){

    int xf,yf,xi,yi,vi,r1,r2;
    int distance = 0;

    while(scanf("%d %d %d %d %d %d %d",&xf,&yf,&xi,&yi,&vi,&r1,&r2) != EOF){
        distance = sqrt((xf - xi) * (xf - xi) + (yf - yi) * (yf - yi));
        if((distance + 1.5*vi) >= (r1/2 + r2/2)){
            printf("N\n");
        }else {
            printf("Y\n");
        }
    }

    return 0;

}