#include <stdio.h>

char isRectangle(int a, int b, int c){
    if(c*c == a*a + b*b){
        return 'S';
    }else{
        return 'N';
    }
}

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;

    scanf("%d %d %d",&a,&b,&c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if(a >= b+c || b >= a+c || c >= a+b){
        printf("Invalido\n");
        return 0;
    }

    if(a == b && a == c){
        printf("Valido-Equilatero\n");
        printf("Retangulo: %c\n",isRectangle(a,b,c));
        return 0;
    }

    if(a == b || a == c || b == c){
        printf("Valido-Isoceles\n");
        printf("Retangulo: %c\n",isRectangle(a,b,c));
        return 0;
    }

    if(a != b && a != c && b != c){
        printf("Valido-Escaleno\n");
        printf("Retangulo: %c\n",isRectangle(a,b,c));
        return 0;
    }

    return 0;
}