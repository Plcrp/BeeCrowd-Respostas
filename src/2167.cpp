#include <stdio.h>

int main(){

    int n = 0;
    int m = -1;
    int q = 0;
    int count = 0;

    scanf("%d",&q);

    for(int i = 0 ; i < q ; i++){
        scanf("%d",&n);
        if(n < m){
            count = i;
            break;
        }
        m = n;
    }

    if(count == 0){
        printf("%d\n",0);
    } else{
        printf("%d\n",++count);
    }

    return 0;
}