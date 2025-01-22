#include <stdio.h>
#include <string.h>

int main(){

    int n = 0;
    char name[26];
    char vilain[] = "Coderinga\n";

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        getchar();
        fgets(name,25,stdin);
        if(strcmp(name,vilain) == 0){
            printf("N\n");
        } else{
            printf("Y\n");
        }
    }

    return 0;

}