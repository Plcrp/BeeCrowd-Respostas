#include <stdio.h>

int main(){

    int s = 0;
    int t = 0;
    int f = 0;

    scanf("%d %d %d",&s,&t,&f);

    int x = s+t+f;

    if(x >= 24){
        printf("%d\n",x-24);
    }else if(x < 0){
        printf("%d\n",24+x);
    } else{
        printf("%d\n",x);
    }

    return 0;

}