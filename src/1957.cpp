#include <stdio.h>

int main(){

    int n = 0;
    int r = 0; 
    int counter = 0;
    char inverso[8] = {'\0'};
    scanf("%d",&n);

    while(n != 0){

        r = n%16;

        if(r <= 9){
            inverso[counter] = (r + 48);
            //printf("%c",inverso[counter]);
        } else{
            inverso[counter] = 65+(r-10);
            //printf("%c",inverso[counter]);
        }

        n = (int)n/16;
        counter++;

    }

    counter = 0;
    for(int i = 7 ; i >= 0 ; i--){
        if(inverso[i] != '\0'){
            printf("%c",inverso[i]);
        }
    }

    printf("\n");
    return 0;

}