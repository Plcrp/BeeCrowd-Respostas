#include <stdio.h>

int main(){

    int n = 0;
    scanf("%d",&n);

    if(n == 0){
        printf("E\n");
    }else if(n >= 1 && n <= 35){
        printf("D\n");
    }else if(n >= 36 && n <= 60){
        printf("C\n");
    }else if(n >= 61 && n <=85){
        printf("B\n");
    }else if(n >= 86){
        printf("A\n");
    }
    return 0;

}