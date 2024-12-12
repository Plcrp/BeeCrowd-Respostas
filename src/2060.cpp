#include <stdio.h>
 
int main() {
 
    int n = 0;
    int number = 0;
    int a[4] = {0};
    
    scanf("%d",&n);
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&number);
        if(number%2 == 0){
            a[0]++;
        }
        if(number%3 == 0){
            a[1]++;
        }
        if(number%4 == 0){
            a[2]++;
        }
        if(number%5 == 0){
            a[3]++;
        }
    }
    
    printf("%d Multiplo(s) de 2\n",a[0]);
    printf("%d Multiplo(s) de 3\n",a[1]);
    printf("%d Multiplo(s) de 4\n",a[2]);
    printf("%d Multiplo(s) de 5\n",a[3]);
 
    return 0;
}