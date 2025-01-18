#include <stdio.h>
#include <string.h>

char op(int x, int y, int z){
    if (z == x + y) {
        return '+';
    } else if (z == x - y) {
        return '-';
    } else if (z == x * y) {
        return '*';
    } else if (y != 0 && z == x / y) {
        return '/';
    } else {
        return 'I'; 
    }
    return 'I';
}

void insertionSort(char arr[][20], int n) {
    for (int i = 1; i < n; i++) {
        char key[20];
        strcpy(key, arr[i]);
        int j = i - 1;

        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

int main(){

    int n,x,y,z;
    char name[20];
    char names[50][20];
    int expression_index;
    char operator_answer;
    char t[50]; //operadores
    int notpass = 0;

    while(scanf("%d",&n) != 0){
        notpass = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d=%d",&x,&y,&z);
            t[i] = op(x,y,z);
        }
        for(int i = 0 ; i < n ; i++){
            getchar();
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            scanf("%d",&expression_index);
            getchar();
            scanf("%c",&operator_answer);
            getchar();

            if(t[expression_index-1] != operator_answer){
                strcpy(names[notpass],name);
                notpass++;
            }
        }

        insertionSort(names,n); //!!!

        if(notpass == n){
            printf("None Shall Pass!\n");
        } else{
            for(int i = 0 ; i < notpass ; i++){
                printf("%s",names[i]);
                if(i == notpass-1){
                    printf("\n");
                } else{
                    printf(" ");
                }
            }
        }
        
    }
    //Pendente...
    //Problema na saída do código
    return 0;
}