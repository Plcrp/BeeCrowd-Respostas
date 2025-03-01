#include <stdio.h>
#include <stdlib.h>
//Comentário == chatgpt
int main() {
    int n;
    
    while (scanf("%d", &n) == 1) { 
        int **mt = (int **)malloc(n * sizeof(int *)); // Aloca espaço para os ponteiros das linhas
        if (mt == NULL) {
            perror("Erro ao alocar memória");
            return 1;
        }

        // Aloca cada linha da matriz e verifica se deu certo
        for (int i = 0; i < n; i++) {
            mt[i] = (int *)malloc(n * sizeof(int));
            if (mt[i] == NULL) {
                perror("Erro ao alocar linha");

                // Libera as linhas já alocadas antes de sair para evitar vazamento de memória
                for (int k = 0; k < i; k++) {
                    free(mt[k]);
                }
                free(mt);
                return 1;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mt[i][j] = (i == j) ? 1 : 3;
            }
        }

        for (int i = 0; i < n; i++) {
            mt[i][n - 1 - i] = 2;
        }

        // Imprimindo a matriz
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", mt[i][j]);
            }
            printf("\n");
        }

        // Liberando a memória corretamente
        for (int i = 0; i < n; i++) {
            free(mt[i]); // Libera cada linha
        }
        free(mt); // Libera o array de ponteiros
    }

    return 0;
}
