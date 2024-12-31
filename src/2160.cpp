#include <stdio.h>

int main(){

    int count = 0;
    char s[500];

    fgets(s,sizeof(s),stdin);

    for(int i = 0 ; i < 500 ; i++){
        if(s[i] != '\0'){
            count++;
        } else{
            break;
        }
    }

    if((count - 1)<= 80){
        printf("YES\n");
    } else{
        printf("NO\n");
    }

    return 0;

}