#include <stdio.h>

int main(){

    int n = 0;
    scanf("%d",&n);
    int m[n+1][n+1];

    for(int i = 0 ; i < n+1 ; i++){
        for(int j = 0 ; j < n+1 ; j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(m[i][j] + m[i+1][j] + m[i][j+1] + m[i+1][j+1] > 1){
                printf("S");
            } else{
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;

}