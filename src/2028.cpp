//Time Limit Exceed :/
#include <stdio.h>

int main(){

    int n = 0;
    int loop_counter = 0;
    int number_counter = 0;

    while(scanf("%d",&n) != 0){
        loop_counter++;
        int sum = 1;
        
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j < i ; j++){
                sum++;
            }
        }

        if(n == 1){
            printf("Caso %d: %d numero\n",loop_counter,sum);
        } else{
            printf("Caso %d: %d numeros\n",loop_counter,sum);
        }

        printf("0 ");

        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j < i ; j++){
                printf("%d ",i);
            }
        }
        printf("\n");
        
    }

    return 0;

}