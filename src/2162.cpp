#include <stdio.h>

int main(){

    int n = 0;
    int b = 1;
    scanf("%d",&n);

    int numbers[n];
    char signals[n];

    scanf("%d",&numbers[0]);

    for(int i = 1 ; i < n ; i++){
        scanf("%d",&numbers[i]);
        if(numbers[i] == numbers[i-1]){
            printf("0\n");
            return 0;
        }
        if(numbers[i]>numbers[i-1]){
            signals[i-1] = '+';
        }
        if(numbers[i]<numbers[i-1]){
            signals[i-1] = '-';
        }
    }

    for(int i = 1 ; i < n ; i++){
        if(signals[i] == signals[i-1]){
            b = 0;
        }
    }

    printf("%d\n",b);

    return 0;
}