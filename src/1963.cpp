#include <stdio.h>

int main(){

    float a = 0;
    float b = 0;

    scanf("%f",&a);
    scanf("%f",&b);

    printf("%.2f%\n",100*(b-a)/a);

    return 0;

}