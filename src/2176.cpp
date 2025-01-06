#include <stdio.h>

int main(){

    int count = 0;
    int count1 = 0; 
    char s[102];
    scanf("%100s",s);
    

    while(s[count] != '\0'){
        if(s[count] == '1'){
            count1++;
        }
        count++;
    }

    if(count1 %2 == 0){
        s[count] = '0';
    } else{
        s[count] = '1';
    }

    s[count+1] = '\0';
    printf("%s\n",s);

    return 0;

}