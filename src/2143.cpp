#include <stdio.h>

int main(){

    int n,t;
    int total = 0;

    while(scanf("%d",&t) && t){
        for(int i = 0 ; i < t ; i++){
            scanf("%d",&n);
            if(n%2 == 0){
                printf("%d\n",n*2-2);
            } else{
                printf("%d\n",2*n-1);
            }
        }
    }


    return 0;

}