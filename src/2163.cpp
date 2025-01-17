#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d",&x,&y);
    int m[x][y];

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(int i = 1 ; i < x-1 ; i++){
        for(int j = 1 ; j < y-1 ; j++){
            if(m[i][j] == 42 && m[i-1][j-1] == 7 && m[i][j-1] == 7 && m[i+1][j-1] == 7 && m[i+1][j] == 7 && m[i-1][j] == 7 && m[i-1][j+1] == 7 && m[i][j+1] == 7 && m[i+1][j+1] == 7){
                a = i+1;
                b = j+1;
                break;
            }
        }
    }

    printf("%d %d\n",a,b);

    return 0;

}