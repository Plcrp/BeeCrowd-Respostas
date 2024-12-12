#include <stdio.h>

int main(){
    int cases = 0;
    float sum = 0;
    int value = 0;

    while(scanf("%d",&cases) > 0){
        for(int i = 0; i < cases ; i++){
            scanf("%d",&value);
            if(value == 1){
                ++sum;
            }
        }
        if(sum >= (float)(2 * cases) / 3){
            printf("impeachment\n");
        } else{
            printf("acusacao arquivada\n");
        }
        sum = 0;
    }

    return 0;
}
