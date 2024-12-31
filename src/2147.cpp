#include <stdio.h>

int main(){

    int n = 0;
    int count = 0;
    char s[10001];

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%10000s",s);
        for(int j = 0 ; j < 10001 ; j++){
            if(s[j] != '\0'){
                count++;
            } else{
                break;
            }
        }
        printf("%.2f\n",count*0.01);
        count = 0;
    }

    return 0;

}