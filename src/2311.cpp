#include <stdio.h>

int main(){

    int m = 0;
    float gd = 0;
    float n[7];
    float maior = 0;
    float menor = 0;
    float sum = 0;
    char nome[50];

    scanf("%d",&m);

    for(int i = 0 ; i < m ; i++){
        scanf("%49s",nome);
        scanf("%f",&gd);
        scanf("%f %f %f %f %f %f %f",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6]);

        maior = n[0];
        menor = n[0];
        sum = 0;

        for(int j = 0 ; j < 7 ; j++){
            sum += n[j];
            if(n[j] < menor){
                menor = n[j];
            }
            if(n[j] > maior){
                maior = n[j];
            }
        }

        printf("%s %.2f\n",nome,(sum-maior-menor)*gd);
    }


    return 0;
}