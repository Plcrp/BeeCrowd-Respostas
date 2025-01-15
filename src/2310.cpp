#include <stdio.h>

int main(){

    int n = 0;
    int s,b,a,s1,b1,a1;
    int sums = 0;
    int sumb = 0;
    int suma = 0;
    int sums1 = 0;
    int sumb1 = 0;
    int suma1 = 0;
    char nome[100];

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%99s",nome);
        scanf("%d %d %d",&s,&b,&a);
        sums += s;
        sumb += b;
        suma += a;
        scanf("%d %d %d",&s1,&b1,&a1);
        sums1 += s1;
        sumb1 += b1;
        suma1 += a1;
    }

    sums1 *= 100;
    sumb1 *= 100;
    suma1 *= 100;

    printf("Pontos de Saque: %.2f %%.\n",(float)sums1/sums);
    printf("Pontos de Bloqueio: %.2f %%.\n",(float)sumb1/sumb);
    printf("Pontos de Ataque: %.2f %%.\n",(float)suma1/suma);

    return 0;
}