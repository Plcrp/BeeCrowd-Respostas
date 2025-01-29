#include <stdio.h>

int main(){

    char str[27];
    int n = 0;
    int m = 0;


    while(scanf("%s",str) == 1 && scanf("%d",&n) == 1){
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&m);
            printf("%c",str[m-1]);
        }
        printf("\n");
    }

    return 0;
}