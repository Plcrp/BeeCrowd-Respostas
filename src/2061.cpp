#include <stdio.h>
 
int main() {
 
    int n = 0;
    int m = 0;
    char str[7];
    
    scanf("%d",&n);
    scanf("%d",&m);
    
    for(int i = 0 ; i < m ; i++){
        scanf("%s",str);
        if(str[0] == 'f'){
            n++;
        }
        if(str[0] == 'c'){
            n--;
        }
    }
    
    if(n < 0){
        printf("0\n");
    } else{
        printf("%d\n",n);
    }
 
    return 0;
}