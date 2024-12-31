#include <stdio.h>

int main(){

    int n[6] = {2,5,10,20,50,100};
    int x = 0;
    int y = 0;
    int c = 0;
    int boolean = 0;

    while(scanf("%d %d",&x,&y) != 0 && x != 0 && y != 0){
        c = y - x;
        boolean = 0;

        for(int i = 0 ; i < 6 ; i++){
            for(int j = i ; j < 6 ; j++){
                if(n[i] + n[j] == c){
                    boolean = 1;
                    break;
                }
            }
        }

        if(boolean == 1){
            printf("possible\n");
        } else{
            printf("impossible\n");
        }
    }

    return 0;
    
}