#include <stdio.h>

int main(){

    int quantidade = 0;
    double maior_nota = -1;
    int maior_matricula = -1;
    long matricula = 0;
    double nota = 0;

    scanf("%d",&quantidade);

    for(int i = 0 ; i < quantidade ; i++){
        scanf("%ld %lf",&matricula,&nota);
        if(nota >= 8 && nota >= maior_nota){
            maior_nota = nota;
            maior_matricula = matricula;
        }
    }

    if(maior_nota == -1){
        printf("Minimum note not reached\n");
    } else{
        printf("%ld\n",maior_matricula);
    }

    return 0;

}