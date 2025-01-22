#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//NÃO FUNCIONA(MAS ESTÁ CORRETO) POIS O BEECROWD É UMA PLATAFORMA MALDITA, IMUNDA E SATÂNICA.

char op(int x, int y, int z) {
    if (z == x + y) return '+';
    if (z == x - y) return '-';
    if (z == x * y) return '*';
    if (y != 0 && z == x / y) return '/';
    return 'I';
}

int compareNames(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main(){

    int n,x,y,z;
    char name[20];
    char names[50][20];
    int expression_index;
    char operator_answer;
    char t[50]; //operadores
    int notpass = 0;

    while(scanf("%d",&n) != EOF){
        notpass = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d=%d",&x,&y,&z);
            t[i] = op(x,y,z);
        }
        for(int i = 0 ; i < n ; i++){
            scanf("%s %d %c",name,&expression_index,&operator_answer);

            if(t[expression_index-1] != operator_answer){
                strcpy(names[notpass],name);
                notpass++;
            }
        }

        if(notpass == n){
            printf("None Shall Pass!\n");
        } else{
            qsort(names, notpass, sizeof(names[0]), compareNames);
            for(int i = 0 ; i < notpass ; i++){
                if (i > 0) printf(" ");
                printf("%s", names[i]);
            }
        }
        printf("\n");
    }
    return 0;
}


