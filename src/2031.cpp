#include <stdio.h>
#include <string.h>

int main(){

    char in1[10];
    char in2[10];
    int n = 0;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%s%s",in1,in2);
        if(in1[1] == 't' && in2[1] == 't'){
            printf("Aniquilacao mutua\n");
            continue;
        }
        if(in1[1] == 'e' && (in1[1] == in2[1])){
            printf("Sem ganhador\n");
            continue;
        }
        if(in1[1] == 'a' && in2[1] == 'a'){
            printf("Ambos venceram\n");
            continue;
        }

        if(in1[1] == 't'){
            printf("Jogador 1 venceu\n");
            continue;
        }
        if(in2[1] == 't'){
            printf("Jogador 2 venceu\n");
            continue;
        }
        if(in1[1] == 'a'){
            printf("Jogador 2 venceu\n");
            continue;
        }
        if(in2[1] == 'a'){
            printf("Jogador 1 venceu\n");
            continue;
        }
    }


    return 0;

}