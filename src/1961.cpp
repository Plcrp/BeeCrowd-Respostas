#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int n = 0;
    int p = 0;
    int is_over = 0;
    
    scanf("%d",&p);
    scanf("%d",&n);
    
    int arr[n];
    scanf("%d",&arr[0]);
    
    for(int i = 1 ; i < n ; i++){
        
        scanf("%d",&arr[i]);
        if(abs(arr[i] - arr[i-1]) > p){
            is_over = 1;
        }
    }
    
    if(is_over == 1){
        printf("GAME OVER\n");
    } else{
        printf("YOU WIN\n");
    }
    
    
 
    return 0;
}