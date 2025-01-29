#include <stdio.h>

int main(){

    int n,m,n2,m2;
    int count = 0;

    while(scanf("%d %d",&n,&m) == 2){
        for(int i = 0 ; i < n ; i++){
            scanf("%d %d",&m2,&n2);
            if(m2 == m && n2 == 0){
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;
    }

    return 0;
}