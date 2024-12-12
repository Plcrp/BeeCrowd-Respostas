#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a == b){
        printf("%d\n",a);
        return 0;
    }
    if(a > b){
        printf("%d\n",a);
    } else{
        printf("%d\n",b);
    }
 
    return 0;
}