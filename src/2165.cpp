#include <stdio.h>

int main(){

    char t[500];
    int count = 0;

    fgets(t,500,stdin);
    
    for(int i = 0 ; i < 500 ; i++){
        if(t[i] == '\0'){
            break;
        }else{
            count++;
        }
    }

    if(--count > 140){
        printf("MUTE\n");
    }else{
        printf("TWEET\n");
    }

    return 0;
}