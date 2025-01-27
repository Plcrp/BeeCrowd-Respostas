#include <stdio.h>
// INCOMPLETO/ERRADO.
int main(){

    char c[50] = {0};
    int n = 0;
    int i = 0;

    scanf("%d",&n);

    while(n >= 1000){
        c[i] = 'M';
        n -= 1000;
        i++;
    }
    while(n >= 500){
        c[i] = 'D';
        n -= 500;
        i++;
    }
    while(n >= 100){
        c[i] = 'C';
        n -= 100;
        i++;
    }
    while(n >= 50){
        c[i] = 'L';
        n -= 50;
        i++;
    }
    while(n >= 10){
        c[i] = 'X';
        n -= 10;
        i++;
    }
    while(n >= 5){
        c[i] = 'V';
        n -= 5;
        i ++;
    }
    while(n >= 1){
        c[i] = 'I';
        n -= 1;
        i++;
    }

    for(int j = 0 ; j < i ; j++){
        printf("%c",c[j]);
    }
    printf("\n");

    return 0;

}